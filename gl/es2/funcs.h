
// ** file automatically generated by glgen -- do not edit manually **

#ifndef __cplusplus
#include <inttypes.h>
#include <stddef.h>
typedef unsigned int	GLenum;
typedef unsigned char	GLboolean;
typedef unsigned int	GLbitfield;
typedef void		GLvoid;
typedef char            GLchar;
typedef signed char	GLbyte;		/* 1-byte signed */
typedef short		GLshort;	/* 2-byte signed */
typedef int		GLint;		/* 4-byte signed */
typedef unsigned char	GLubyte;	/* 1-byte unsigned */
typedef unsigned short	GLushort;	/* 2-byte unsigned */
typedef unsigned int	GLuint;		/* 4-byte unsigned */
typedef int		GLsizei;	/* 4-byte signed */
typedef float		GLfloat;	/* single precision float */
typedef float		GLclampf;	/* single precision float in [0,1] */
typedef double		GLdouble;	/* double precision float */
typedef double		GLclampd;	/* double precision float in [0,1] */
typedef int64_t         GLint64;
typedef uint64_t        GLuint64;
typedef ptrdiff_t       GLintptr;
typedef ptrdiff_t       GLsizeiptr;
typedef ptrdiff_t       GLintptrARB;
typedef ptrdiff_t       GLsizeiptrARB;
typedef struct __GLsync *GLsync;
#endif

#ifdef __cplusplus
extern "C" {
#endif

void *gles2_funcs();

void gles2_glActiveTexture(void *_glfuncs, GLenum texture);
void gles2_glAttachShader(void *_glfuncs, GLuint program, GLuint shader);
void gles2_glBindAttribLocation(void *_glfuncs, GLuint program, GLuint index, const GLchar* name);
void gles2_glBindBuffer(void *_glfuncs, GLenum target, GLuint buffer);
void gles2_glBindFramebuffer(void *_glfuncs, GLenum target, GLuint framebuffer);
void gles2_glBindRenderbuffer(void *_glfuncs, GLenum target, GLuint renderbuffer);
void gles2_glBlendColor(void *_glfuncs, GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);
void gles2_glBlendEquation(void *_glfuncs, GLenum mode);
void gles2_glBlendEquationSeparate(void *_glfuncs, GLenum modeRGB, GLenum modeAlpha);
void gles2_glBlendFuncSeparate(void *_glfuncs, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
void gles2_glBufferData(void *_glfuncs, GLenum target, GLsizeiptr size, const GLvoid* data, GLenum usage);
void gles2_glBufferSubData(void *_glfuncs, GLenum target, GLintptr offset, GLsizeiptr size, const GLvoid* data);
GLenum gles2_glCheckFramebufferStatus(void *_glfuncs, GLenum target);
void gles2_glClearDepthf(void *_glfuncs, GLclampf depth);
void gles2_glCompileShader(void *_glfuncs, GLuint shader);
void gles2_glCompressedTexImage2D(void *_glfuncs, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid* data);
void gles2_glCompressedTexSubImage2D(void *_glfuncs, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid* data);
GLuint gles2_glCreateProgram(void *_glfuncs);
GLuint gles2_glCreateShader(void *_glfuncs, GLenum gltype);
void gles2_glDeleteBuffers(void *_glfuncs, GLsizei n, const GLuint* buffers);
void gles2_glDeleteFramebuffers(void *_glfuncs, GLsizei n, const GLuint* framebuffers);
void gles2_glDeleteProgram(void *_glfuncs, GLuint program);
void gles2_glDeleteRenderbuffers(void *_glfuncs, GLsizei n, const GLuint* renderbuffers);
void gles2_glDeleteShader(void *_glfuncs, GLuint shader);
void gles2_glDepthRangef(void *_glfuncs, GLclampf zNear, GLclampf zFar);
void gles2_glDetachShader(void *_glfuncs, GLuint program, GLuint shader);
void gles2_glDisableVertexAttribArray(void *_glfuncs, GLuint index);
void gles2_glEnableVertexAttribArray(void *_glfuncs, GLuint index);
void gles2_glFramebufferRenderbuffer(void *_glfuncs, GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
void gles2_glFramebufferTexture2D(void *_glfuncs, GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
void gles2_glGenBuffers(void *_glfuncs, GLsizei n, GLuint* buffers);
void gles2_glGenerateMipmap(void *_glfuncs, GLenum target);
void gles2_glGenFramebuffers(void *_glfuncs, GLsizei n, GLuint* framebuffers);
void gles2_glGenRenderbuffers(void *_glfuncs, GLsizei n, GLuint* renderbuffers);
void gles2_glGetActiveAttrib(void *_glfuncs, GLuint program, GLuint index, GLsizei bufsize, GLsizei* length, GLint* size, GLenum* gltype, GLchar* name);
void gles2_glGetActiveUniform(void *_glfuncs, GLuint program, GLuint index, GLsizei bufsize, GLsizei* length, GLint* size, GLenum* gltype, GLchar* name);
void gles2_glGetAttachedShaders(void *_glfuncs, GLuint program, GLsizei maxcount, GLsizei* count, GLuint* shaders);
GLint gles2_glGetAttribLocation(void *_glfuncs, GLuint program, const GLchar* name);
void gles2_glGetBufferParameteriv(void *_glfuncs, GLenum target, GLenum pname, GLint* params);
void gles2_glGetFramebufferAttachmentParameteriv(void *_glfuncs, GLenum target, GLenum attachment, GLenum pname, GLint* params);
void gles2_glGetProgramiv(void *_glfuncs, GLuint program, GLenum pname, GLint* params);
void gles2_glGetProgramInfoLog(void *_glfuncs, GLuint program, GLsizei bufsize, GLsizei* length, GLchar* infolog);
void gles2_glGetRenderbufferParameteriv(void *_glfuncs, GLenum target, GLenum pname, GLint* params);
void gles2_glGetShaderiv(void *_glfuncs, GLuint shader, GLenum pname, GLint* params);
void gles2_glGetShaderInfoLog(void *_glfuncs, GLuint shader, GLsizei bufsize, GLsizei* length, GLchar* infolog);
void gles2_glGetShaderPrecisionFormat(void *_glfuncs, GLenum shadertype, GLenum precisiontype, GLint* range_, GLint* precision);
void gles2_glGetShaderSource(void *_glfuncs, GLuint shader, GLsizei bufsize, GLsizei* length, GLchar* source);
void gles2_glGetUniformfv(void *_glfuncs, GLuint program, GLint location, GLfloat* params);
void gles2_glGetUniformiv(void *_glfuncs, GLuint program, GLint location, GLint* params);
GLint gles2_glGetUniformLocation(void *_glfuncs, GLuint program, const GLchar* name);
void gles2_glGetVertexAttribfv(void *_glfuncs, GLuint index, GLenum pname, GLfloat* params);
void gles2_glGetVertexAttribiv(void *_glfuncs, GLuint index, GLenum pname, GLint* params);
GLboolean gles2_glIsBuffer(void *_glfuncs, GLuint buffer);
GLboolean gles2_glIsFramebuffer(void *_glfuncs, GLuint framebuffer);
GLboolean gles2_glIsProgram(void *_glfuncs, GLuint program);
GLboolean gles2_glIsRenderbuffer(void *_glfuncs, GLuint renderbuffer);
GLboolean gles2_glIsShader(void *_glfuncs, GLuint shader);
void gles2_glLinkProgram(void *_glfuncs, GLuint program);
void gles2_glReleaseShaderCompiler(void *_glfuncs);
void gles2_glRenderbufferStorage(void *_glfuncs, GLenum target, GLenum internalformat, GLsizei width, GLsizei height);
void gles2_glSampleCoverage(void *_glfuncs, GLclampf value, GLboolean invert);
void gles2_glShaderBinary(void *_glfuncs, GLint n, const GLuint* shaders, GLenum binaryformat, const GLvoid* binary, GLint length);
void gles2_glShaderSource(void *_glfuncs, GLuint shader, GLsizei count, const GLchar** glstring, const GLint* length);
void gles2_glStencilFuncSeparate(void *_glfuncs, GLenum face, GLenum glfunc, GLint ref, GLuint mask);
void gles2_glStencilMaskSeparate(void *_glfuncs, GLenum face, GLuint mask);
void gles2_glStencilOpSeparate(void *_glfuncs, GLenum face, GLenum fail, GLenum zfail, GLenum zpass);
void gles2_glUniform1f(void *_glfuncs, GLint location, GLfloat x);
void gles2_glUniform1fv(void *_glfuncs, GLint location, GLsizei count, const GLfloat* v);
void gles2_glUniform1i(void *_glfuncs, GLint location, GLint x);
void gles2_glUniform1iv(void *_glfuncs, GLint location, GLsizei count, const GLint* v);
void gles2_glUniform2f(void *_glfuncs, GLint location, GLfloat x, GLfloat y);
void gles2_glUniform2fv(void *_glfuncs, GLint location, GLsizei count, const GLfloat* v);
void gles2_glUniform2i(void *_glfuncs, GLint location, GLint x, GLint y);
void gles2_glUniform2iv(void *_glfuncs, GLint location, GLsizei count, const GLint* v);
void gles2_glUniform3f(void *_glfuncs, GLint location, GLfloat x, GLfloat y, GLfloat z);
void gles2_glUniform3fv(void *_glfuncs, GLint location, GLsizei count, const GLfloat* v);
void gles2_glUniform3i(void *_glfuncs, GLint location, GLint x, GLint y, GLint z);
void gles2_glUniform3iv(void *_glfuncs, GLint location, GLsizei count, const GLint* v);
void gles2_glUniform4f(void *_glfuncs, GLint location, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
void gles2_glUniform4fv(void *_glfuncs, GLint location, GLsizei count, const GLfloat* v);
void gles2_glUniform4i(void *_glfuncs, GLint location, GLint x, GLint y, GLint z, GLint w);
void gles2_glUniform4iv(void *_glfuncs, GLint location, GLsizei count, const GLint* v);
void gles2_glUniformMatrix2fv(void *_glfuncs, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
void gles2_glUniformMatrix3fv(void *_glfuncs, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
void gles2_glUniformMatrix4fv(void *_glfuncs, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
void gles2_glUseProgram(void *_glfuncs, GLuint program);
void gles2_glValidateProgram(void *_glfuncs, GLuint program);
void gles2_glVertexAttrib1f(void *_glfuncs, GLuint indx, GLfloat x);
void gles2_glVertexAttrib1fv(void *_glfuncs, GLuint indx, const GLfloat* values);
void gles2_glVertexAttrib2f(void *_glfuncs, GLuint indx, GLfloat x, GLfloat y);
void gles2_glVertexAttrib2fv(void *_glfuncs, GLuint indx, const GLfloat* values);
void gles2_glVertexAttrib3f(void *_glfuncs, GLuint indx, GLfloat x, GLfloat y, GLfloat z);
void gles2_glVertexAttrib3fv(void *_glfuncs, GLuint indx, const GLfloat* values);
void gles2_glVertexAttrib4f(void *_glfuncs, GLuint indx, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
void gles2_glVertexAttrib4fv(void *_glfuncs, GLuint indx, const GLfloat* values);
void gles2_glVertexAttribPointer(void *_glfuncs, GLuint indx, GLint size, GLenum gltype, GLboolean normalized, GLsizei stride, const GLvoid* ptr);
void gles2_glBindTexture(void *_glfuncs, GLenum target, GLuint texture);
void gles2_glBlendFunc(void *_glfuncs, GLenum sfactor, GLenum dfactor);
void gles2_glClear(void *_glfuncs, GLbitfield mask);
void gles2_glClearColor(void *_glfuncs, GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);
void gles2_glClearStencil(void *_glfuncs, GLint s);
void gles2_glColorMask(void *_glfuncs, GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
void gles2_glCopyTexImage2D(void *_glfuncs, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
void gles2_glCopyTexSubImage2D(void *_glfuncs, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
void gles2_glCullFace(void *_glfuncs, GLenum mode);
void gles2_glDeleteTextures(void *_glfuncs, GLsizei n, const GLuint* textures);
void gles2_glDepthFunc(void *_glfuncs, GLenum glfunc);
void gles2_glDepthMask(void *_glfuncs, GLboolean flag);
void gles2_glDisable(void *_glfuncs, GLenum cap);
void gles2_glDrawArrays(void *_glfuncs, GLenum mode, GLint first, GLsizei count);
void gles2_glDrawElements(void *_glfuncs, GLenum mode, GLsizei count, GLenum gltype, const GLvoid* indices);
void gles2_glEnable(void *_glfuncs, GLenum cap);
void gles2_glFinish(void *_glfuncs);
void gles2_glFlush(void *_glfuncs);
void gles2_glFrontFace(void *_glfuncs, GLenum mode);
void gles2_glGenTextures(void *_glfuncs, GLsizei n, GLuint* textures);
void gles2_glGetBooleanv(void *_glfuncs, GLenum pname, GLboolean* params);
GLenum gles2_glGetError(void *_glfuncs);
void gles2_glGetFloatv(void *_glfuncs, GLenum pname, GLfloat* params);
void gles2_glGetIntegerv(void *_glfuncs, GLenum pname, GLint* params);
void gles2_glGetTexParameterfv(void *_glfuncs, GLenum target, GLenum pname, GLfloat* params);
void gles2_glGetTexParameteriv(void *_glfuncs, GLenum target, GLenum pname, GLint* params);
void gles2_glHint(void *_glfuncs, GLenum target, GLenum mode);
GLboolean gles2_glIsEnabled(void *_glfuncs, GLenum cap);
GLboolean gles2_glIsTexture(void *_glfuncs, GLuint texture);
void gles2_glLineWidth(void *_glfuncs, GLfloat width);
void gles2_glPixelStorei(void *_glfuncs, GLenum pname, GLint param);
void gles2_glPolygonOffset(void *_glfuncs, GLfloat factor, GLfloat units);
void gles2_glReadPixels(void *_glfuncs, GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum gltype, GLvoid* pixels);
void gles2_glScissor(void *_glfuncs, GLint x, GLint y, GLsizei width, GLsizei height);
void gles2_glStencilFunc(void *_glfuncs, GLenum glfunc, GLint ref, GLuint mask);
void gles2_glStencilMask(void *_glfuncs, GLuint mask);
void gles2_glStencilOp(void *_glfuncs, GLenum fail, GLenum zfail, GLenum zpass);
void gles2_glTexImage2D(void *_glfuncs, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum gltype, const GLvoid* pixels);
void gles2_glTexParameterf(void *_glfuncs, GLenum target, GLenum pname, GLfloat param);
void gles2_glTexParameterfv(void *_glfuncs, GLenum target, GLenum pname, const GLfloat* params);
void gles2_glTexParameteri(void *_glfuncs, GLenum target, GLenum pname, GLint param);
void gles2_glTexParameteriv(void *_glfuncs, GLenum target, GLenum pname, const GLint* params);
void gles2_glTexSubImage2D(void *_glfuncs, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum gltype, const GLvoid* pixels);
void gles2_glViewport(void *_glfuncs, GLint x, GLint y, GLsizei width, GLsizei height);


#ifdef __cplusplus
} // extern "C"
#endif
