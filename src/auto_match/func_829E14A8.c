typedef unsigned int uint;
typedef struct { char d[0xd4d0]; } Elem;
typedef struct { int a; int pad; char b[8]; Elem e[8]; } Out;
typedef struct { char pad[0xc]; unsigned short id; } Ctx;
extern uint *fn_829E0C20(Ctx *c, unsigned short id);
extern void fn_82A1DDC0(void *d, void *s, int n);
extern int fn_829E13E0(Elem *e, Ctx *ctx, unsigned short id);

int fn_829E14A8(Out *out, Ctx *ctx)
{
  uint *hdr;
  int hr;
  uint i;
  unsigned short *p;

  if (ctx->id == 0) {
    return 0x80004005;
  }
  hdr = fn_829E0C20(ctx, ctx->id);
  if (hdr == 0) {
    return 0x80004005;
  }
  fn_82A1DDC0(out, hdr + 2, 4);
  fn_82A1DDC0(out->b, hdr + 4, 8);
  p = (unsigned short *)((char *)hdr + (*hdr >> 14));
  for (i = 0; i < 8; i++) {
    if (*p == 0) {
      return 0x80004005;
    }
    hr = fn_829E13E0(&out->e[i], ctx, *p);
    if (hr < 0) {
      return hr;
    }
    p++;
  }
  return 0;
}
