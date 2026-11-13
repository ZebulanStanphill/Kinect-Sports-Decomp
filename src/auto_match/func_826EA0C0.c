/* GFx JPEG loader: jpeg_read_header under the error handler's setjmp, written as _setjmp as in
   func_826EA070.c. */
typedef double jmp_buf[168];
int _setjmp(jmp_buf env);
extern int jpeg_read_header(void *cinfo, unsigned char require_image);
extern void jpeg_destroy_decompress(void *cinfo);

typedef struct { char pad[0x14c]; jmp_buf *env; } Ctx_826EA0C0;

int fn_826EA0C0(void *cinfo, Ctx_826EA0C0 *ctx, unsigned char require_image)
{
    if (_setjmp(*ctx->env)) {
        jpeg_destroy_decompress(cinfo);
        return 0;
    }
    jpeg_read_header(cinfo, require_image);
    return 1;
}
