typedef struct Stream_826F33F0 Stream_826F33F0;
typedef struct Ctx_826F33F0 {
  char pad0[0x28];
  char stream28[0x2ec];
  Stream_826F33F0 *stream;
} Ctx_826F33F0;
extern void fn_826E90B0(Stream_826F33F0 *s, unsigned char *out);
extern void fn_826E9188(Stream_826F33F0 *s, unsigned char *out);
static __forceinline Stream_826F33F0 *GetStream(Ctx_826F33F0 *ctx)
{
  Stream_826F33F0 *s = (Stream_826F33F0 *)ctx->stream28;
  if (ctx->stream != 0) {
    s = ctx->stream;
  }
  return s;
}
void fn_826F33F0(Ctx_826F33F0 *ctx, unsigned char *out, int version)
{
  if (version <= 0x16) {
    fn_826E90B0(GetStream(ctx), out);
  } else {
    fn_826E9188(GetStream(ctx), out);
  }
}
