// Copyright 2014 The Android Open Source Project
//
// This software is licensed under the terms of the GNU General Public
// License version 2, as published by the Free Software Foundation, and
// may be copied, distributed, and modified under those terms.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

#pragma once

#include "android/base/TypeTraits.h"

#include <memory>
#include <type_traits>

#include <stdlib.h>

namespace android {
namespace base {

struct FreeDelete {
    template <class T>
    void operator()(T ptr) const {
        free((void*)ptr);
    }
};

template <class Func>
struct FuncDelete {
    explicit FuncDelete(Func f) : mF(f) {}

    template <class T>
    void operator()(T t) const {
        mF(t);
    }

private:
    Func mF;
};

template <class T, class Deleter = std::default_delete<T>>
using ScopedPtr = std::unique_ptr<T, Deleter>;

template <class T>
using ScopedCPtr = std::unique_ptr<T, FreeDelete>;

template <class T, class Func>
using ScopedCustomPtr = std::unique_ptr<T, FuncDelete<Func>>;

// A factory function that creates a scoped pointer with |deleter|
// function used as a deleter - it is called at the scope exit.
// Note: enable_if<> limits the scope of allowed arguments to pointers and
//  std::nullptr_t (to allow makeCustomScopedPtr(nullptr, ...) calls).
template <class T,
          class Func,
          class = enable_if_c<std::is_same<T, std::nullptr_t>::value ||
                              std::is_pointer<T>::value>>
ScopedCustomPtr<
        typename std::decay<typename std::remove_pointer<T>::type>::type,
        typename std::decay<Func>::type>
makeCustomScopedPtr(T data, Func deleter) {
    return ScopedCustomPtr<
            typename std::decay<typename std::remove_pointer<T>::type>::type,
            typename std::decay<Func>::type>(
            data, FuncDelete<typename std::decay<Func>::type>(deleter));
}

}  // namespace base
}  // namespace android
