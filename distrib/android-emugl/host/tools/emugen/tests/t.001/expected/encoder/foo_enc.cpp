// Generated Code - DO NOT EDIT !!
// generated by 'emugen'


#include <memory>
#include <string.h>
#include "foo_opcodes.h"

#include "foo_enc.h"


#include <stdio.h>

namespace {

void enc_unsupported()
{
	ALOGE("Function is unsupported\n");
}

void fooAlphaFunc_enc(void *self , FooInt func, FooFloat ref)
{

	foo_encoder_context_t *ctx = (foo_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;
	ChecksumCalculator *checksumCalculator = ctx->m_checksumCalculator;
	bool useChecksum = checksumCalculator->getVersion() > 0;

	 unsigned char *ptr;
	 unsigned char *buf;
	 const size_t sizeWithoutChecksum = 8 + 4 + 4;
	 const size_t checksumSize = checksumCalculator->checksumByteSize();
	 const size_t totalSize = sizeWithoutChecksum + checksumSize;
	buf = stream->alloc(totalSize);
	ptr = buf;
	int tmp = OP_fooAlphaFunc;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &totalSize, 4);  ptr += 4;

		memcpy(ptr, &func, 4); ptr += 4;
		memcpy(ptr, &ref, 4); ptr += 4;

	if (useChecksum) checksumCalculator->addBuffer(buf, ptr-buf);
	if (useChecksum) checksumCalculator->writeChecksum(ptr, checksumSize); ptr += checksumSize;

}

FooBoolean fooIsBuffer_enc(void *self , void* stuff)
{

	foo_encoder_context_t *ctx = (foo_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;
	ChecksumCalculator *checksumCalculator = ctx->m_checksumCalculator;
	bool useChecksum = checksumCalculator->getVersion() > 0;

	const unsigned int __size_stuff =  (4 * sizeof(float));
	 unsigned char *ptr;
	 unsigned char *buf;
	 const size_t sizeWithoutChecksum = 8 + __size_stuff + 1*4;
	 const size_t checksumSize = checksumCalculator->checksumByteSize();
	 const size_t totalSize = sizeWithoutChecksum + checksumSize;
	buf = stream->alloc(totalSize);
	ptr = buf;
	int tmp = OP_fooIsBuffer;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &totalSize, 4);  ptr += 4;

	*(unsigned int *)(ptr) = __size_stuff; ptr += 4;
	memcpy(ptr, stuff, __size_stuff);ptr += __size_stuff;

	if (useChecksum) checksumCalculator->addBuffer(buf, ptr-buf);
	if (useChecksum) checksumCalculator->writeChecksum(ptr, checksumSize); ptr += checksumSize;


	FooBoolean retval;
	stream->readback(&retval, 1);
	if (useChecksum) checksumCalculator->addBuffer(&retval, 1);
	if (useChecksum) {
		std::unique_ptr<unsigned char[]> checksumBuf(new unsigned char[checksumSize]);
		stream->readback(checksumBuf.get(), checksumSize);
		if (!checksumCalculator->validate(checksumBuf.get(), checksumSize)) {
			ALOGE("fooIsBuffer: GL communication error, please report this issue to b.android.com.\n");
			abort();
		}
	}
	return retval;
}

void fooDoEncoderFlush_enc(void *self , FooInt param)
{

	foo_encoder_context_t *ctx = (foo_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;
	ChecksumCalculator *checksumCalculator = ctx->m_checksumCalculator;
	bool useChecksum = checksumCalculator->getVersion() > 0;

	 unsigned char *ptr;
	 unsigned char *buf;
	 const size_t sizeWithoutChecksum = 8 + 4;
	 const size_t checksumSize = checksumCalculator->checksumByteSize();
	 const size_t totalSize = sizeWithoutChecksum + checksumSize;
	buf = stream->alloc(totalSize);
	ptr = buf;
	int tmp = OP_fooDoEncoderFlush;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &totalSize, 4);  ptr += 4;

		memcpy(ptr, &param, 4); ptr += 4;

	if (useChecksum) checksumCalculator->addBuffer(buf, ptr-buf);
	if (useChecksum) checksumCalculator->writeChecksum(ptr, checksumSize); ptr += checksumSize;

	stream->flush();
}

void fooTakeConstVoidPtrConstPtr_enc(void *self , const void* const* param)
{

	foo_encoder_context_t *ctx = (foo_encoder_context_t *)self;
	IOStream *stream = ctx->m_stream;
	ChecksumCalculator *checksumCalculator = ctx->m_checksumCalculator;
	bool useChecksum = checksumCalculator->getVersion() > 0;

	const unsigned int __size_param = ;
	 unsigned char *ptr;
	 unsigned char *buf;
	 const size_t sizeWithoutChecksum = 8 + __size_param + 1*4;
	 const size_t checksumSize = checksumCalculator->checksumByteSize();
	 const size_t totalSize = sizeWithoutChecksum + checksumSize;
	buf = stream->alloc(totalSize);
	ptr = buf;
	int tmp = OP_fooTakeConstVoidPtrConstPtr;memcpy(ptr, &tmp, 4); ptr += 4;
	memcpy(ptr, &totalSize, 4);  ptr += 4;

	*(unsigned int *)(ptr) = __size_param; ptr += 4;
	memcpy(ptr, param, __size_param);ptr += __size_param;

	if (useChecksum) checksumCalculator->addBuffer(buf, ptr-buf);
	if (useChecksum) checksumCalculator->writeChecksum(ptr, checksumSize); ptr += checksumSize;

}

}  // namespace

foo_encoder_context_t::foo_encoder_context_t(IOStream *stream, ChecksumCalculator *checksumCalculator)
{
	m_stream = stream;
	m_checksumCalculator = checksumCalculator;

	this->fooAlphaFunc = &fooAlphaFunc_enc;
	this->fooIsBuffer = &fooIsBuffer_enc;
	this->fooUnsupported = (fooUnsupported_client_proc_t) &enc_unsupported;
	this->fooDoEncoderFlush = &fooDoEncoderFlush_enc;
	this->fooTakeConstVoidPtrConstPtr = &fooTakeConstVoidPtrConstPtr_enc;
}

