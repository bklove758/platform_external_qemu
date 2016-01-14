// Auto-generated with: android/scripts/gen-entries.py --mode=funcargs distrib/android-emugl/host/libs/libOpenGLESDispatch/gles1_only.entries --output=distrib/android-emugl/host/include/OpenGLESDispatch/gles1_only_functions.h
// DO NOT EDIT THIS FILE

#ifndef GLES1_ONLY_FUNCTIONS_H
#define GLES1_ONLY_FUNCTIONS_H

#define LIST_GLES1_ONLY_FUNCTIONS(X) \
  X(void, glAlphaFunc, (GLenum func, GLclampf ref), (func, ref)) \
  X(void, glBegin, (GLenum mode), (mode)) \
  X(void, glClientActiveTexture, (GLenum texture), (texture)) \
  X(void, glClipPlane, (GLenum plane, const GLdouble * equation), (plane, equation)) \
  X(void, glColor4d, (GLdouble red, GLdouble green, GLdouble blue, GLdouble alpha), (red, green, blue, alpha)) \
  X(void, glColor4f, (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha), (red, green, blue, alpha)) \
  X(void, glColor4fv, (const GLfloat * v), (v)) \
  X(void, glColor4ub, (GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha), (red, green, blue, alpha)) \
  X(void, glColor4ubv, (const GLubyte * v), (v)) \
  X(void, glColorPointer, (GLint size, GLenum type, GLsizei stride, const GLvoid * pointer), (size, type, stride, pointer)) \
  X(void, glDisableClientState, (GLenum array), (array)) \
  X(void, glEnableClientState, (GLenum array), (array)) \
  X(void, glEnd, (), ()) \
  X(void, glFogf, (GLenum pname, GLfloat param), (pname, param)) \
  X(void, glFogfv, (GLenum pname, const GLfloat * params), (pname, params)) \
  X(void, glFrustum, (GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar), (left, right, bottom, top, zNear, zFar)) \
  X(void, glGetClipPlane, (GLenum plane, GLdouble * equation), (plane, equation)) \
  X(void, glGetDoublev, (GLenum pname, GLdouble * params), (pname, params)) \
  X(void, glGetLightfv, (GLenum light, GLenum pname, GLfloat * params), (light, pname, params)) \
  X(void, glGetMaterialfv, (GLenum face, GLenum pname, GLfloat * params), (face, pname, params)) \
  X(void, glGetPointerv, (GLenum pname, GLvoid* * params), (pname, params)) \
  X(void, glGetTexEnvfv, (GLenum target, GLenum pname, GLfloat * params), (target, pname, params)) \
  X(void, glGetTexEnviv, (GLenum target, GLenum pname, GLint * params), (target, pname, params)) \
  X(void, glLightf, (GLenum light, GLenum pname, GLfloat param), (light, pname, param)) \
  X(void, glLightfv, (GLenum light, GLenum pname, const GLfloat * params), (light, pname, params)) \
  X(void, glLightModelf, (GLenum pname, GLfloat param), (pname, param)) \
  X(void, glLightModelfv, (GLenum pname, const GLfloat * params), (pname, params)) \
  X(void, glLoadIdentity, (), ()) \
  X(void, glLoadMatrixf, (const GLfloat * m), (m)) \
  X(void, glLogicOp, (GLenum opcode), (opcode)) \
  X(void, glMaterialf, (GLenum face, GLenum pname, GLfloat param), (face, pname, param)) \
  X(void, glMaterialfv, (GLenum face, GLenum pname, const GLfloat * params), (face, pname, params)) \
  X(void, glMultiTexCoord2fv, (GLenum target, const GLfloat * v), (target, v)) \
  X(void, glMultiTexCoord2sv, (GLenum target, const GLshort * v), (target, v)) \
  X(void, glMultiTexCoord3fv, (GLenum target, const GLfloat * v), (target, v)) \
  X(void, glMultiTexCoord3sv, (GLenum target, const GLshort * v), (target, v)) \
  X(void, glMultiTexCoord4f, (GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q), (target, s, t, r, q)) \
  X(void, glMultiTexCoord4fv, (GLenum target, const GLfloat * v), (target, v)) \
  X(void, glMultiTexCoord4sv, (GLenum target, const GLshort * v), (target, v)) \
  X(void, glMultMatrixf, (const GLfloat * m), (m)) \
  X(void, glNormal3f, (GLfloat nx, GLfloat ny, GLfloat nz), (nx, ny, nz)) \
  X(void, glNormal3fv, (const GLfloat * v), (v)) \
  X(void, glNormal3sv, (const GLshort * v), (v)) \
  X(void, glOrtho, (GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar), (left, right, bottom, top, zNear, zFar)) \
  X(void, glPointParameterf, (GLenum param, GLfloat value), (param, value)) \
  X(void, glPointParameterfv, (GLenum param, const GLfloat * values), (param, values)) \
  X(void, glPointSize, (GLfloat size), (size)) \
  X(void, glRotatef, (GLfloat angle, GLfloat x, GLfloat y, GLfloat z), (angle, x, y, z)) \
  X(void, glScalef, (GLfloat x, GLfloat y, GLfloat z), (x, y, z)) \
  X(void, glTexEnvf, (GLenum target, GLenum pname, GLfloat param), (target, pname, param)) \
  X(void, glTexEnvfv, (GLenum target, GLenum pname, const GLfloat * params), (target, pname, params)) \
  X(void, glMatrixMode, (GLenum mode), (mode)) \
  X(void, glNormalPointer, (GLenum type, GLsizei stride, const GLvoid * pointer), (type, stride, pointer)) \
  X(void, glPopMatrix, (), ()) \
  X(void, glPushMatrix, (), ()) \
  X(void, glShadeModel, (GLenum mode), (mode)) \
  X(void, glTexCoordPointer, (GLint size, GLenum type, GLsizei stride, const GLvoid * pointer), (size, type, stride, pointer)) \
  X(void, glTexEnvi, (GLenum target, GLenum pname, GLint param), (target, pname, param)) \
  X(void, glTexEnviv, (GLenum target, GLenum pname, const GLint * params), (target, pname, params)) \
  X(void, glTranslatef, (GLfloat x, GLfloat y, GLfloat z), (x, y, z)) \
  X(void, glVertexPointer, (GLint size, GLenum type, GLsizei stride, const GLvoid * pointer), (size, type, stride, pointer)) \


#endif  // GLES1_ONLY_FUNCTIONS_H
