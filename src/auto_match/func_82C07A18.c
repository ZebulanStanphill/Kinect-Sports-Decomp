typedef struct Src_82C07A18 { char pad0[8]; int f8; char pad1[4]; int f10; int f14; int f18; int f1c; char pad2[0x24]; int f44; } Src_82C07A18;
typedef struct Ctx_82C07A18 { char pad0[4]; Src_82C07A18 *src; char pad1[0x208]; int f210; } Ctx_82C07A18;
typedef struct Out_82C07A18 { int a; int b; int c; int d; unsigned char e; char pad[3]; int f; } Out_82C07A18;
int fn_82C07A18(Ctx_82C07A18 *ctx, Out_82C07A18 *out)
{
  if (ctx != 0 && out != 0 && ctx->f210 != 0) {
    int i;
    int *p = (int *)out;
    for (i = 0; i < 6; i++) p[i] = 0;
    out->d = ctx->src->f1c;
    out->a = ctx->src->f10;
    out->b = ctx->src->f14;
    out->c = ctx->src->f18;
    out->e = (unsigned char)ctx->src->f44;
    out->f = ctx->src->f8;
    return 0;
  }
  return 4;
}
