typedef unsigned int uint;
typedef struct { char d[0xd4d0]; } Elem;
typedef struct { int a; int pad; char b[8]; Elem e[8]; } Out;
typedef struct { char pad[0xc]; unsigned short id; } Ctx;
extern uint *fn_829E0C20(Ctx *c, unsigned short id);
extern int fn_829E0980(uint *p, int a, int b, int c, Ctx *ctx);
extern void fn_82A1DDC0(void *d, void *s, int n);
extern int fn_829E16F0(Elem *e, Ctx *ctx, unsigned short *p);

int fn_829E1800(Out *out, Ctx *ctx)
{
  uint *hdr;
  int hr;
  uint i;
  unsigned short *p;

  hdr = fn_829E0C20(ctx, ctx->id);
  if (hdr == 0) {
    return 0x80004005;
  }
  hr = fn_829E0980(hdr, 0x18, 8, 0, ctx);
  if (hr < 0) {
    return hr;
  }
  fn_82A1DDC0(hdr + 2, out, 4);
  fn_82A1DDC0(hdr + 4, out->b, 8);
  p = (unsigned short *)((char *)hdr + (*hdr >> 14));
  for (i = 0; i < 8; i++) {
    hr = fn_829E16F0(&out->e[i], ctx, p);
    if (hr < 0) {
      return hr;
    }
    if (*p == 0) {
      return 0x80004005;
    }
    p++;
  }
  return 0;
}
