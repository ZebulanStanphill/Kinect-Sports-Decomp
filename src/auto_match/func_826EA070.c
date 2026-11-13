/* GFx JPEG loader: jpeg_CreateDecompress under the error handler's setjmp. The call must be written as
   _setjmp: MSVC then treats it as setjmp (cinfo is spilled to its home slot) and emits a call to setjmp
   (0x82F6C150). */
typedef double jmp_buf[168];
int _setjmp(jmp_buf env);
extern void jpeg_CreateDecompress(void *cinfo, int version, unsigned int size);
extern void jpeg_destroy_decompress(void *cinfo);

typedef struct { char pad[0x14c]; jmp_buf *env; } Ctx_826EA070;

int fn_826EA070(void *cinfo, Ctx_826EA070 *ctx)
{
    if (_setjmp(*ctx->env)) {
        jpeg_destroy_decompress(cinfo);
        return 0;
    }
    jpeg_CreateDecompress(cinfo, 0x3e, 0x1b0);
    return 1;
}
