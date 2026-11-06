typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float vector4_f32[4]; } __vector4;
typedef struct { char pad[8]; __vector4 v8; char pad18[0x2bc]; } Dst_829E1560;
extern void __stvlx(__vector4, void *, int);
extern void __stvrx(__vector4, void *, int);
extern char *fn_829E0C20(void *, unsigned);
extern int fn_829E0980(void *, int, int, int, void *);
extern int fn_82A1DDC0(void *, void *, int);
int fn_829E1560(char *src, void *ctx, unsigned short *idp)
{
  char *d;
  int hr;
  d = fn_829E0C20(ctx, *idp);
  if (d == 0) return 0x80004005;
  hr = fn_829E0980(d, 0x598, 0, 6, ctx);
  if (hr >= 0) {
    *idp = (unsigned short)(*(unsigned *)(d + 4) >> 17);
    { __vector4 v = *(__vector4 *)src; __stvlx(v, d + 8, 0); __stvrx(v, d + 8, 16); }
    fn_82A1DDC0(d + 0x18, src + 0x10, 700);
    fn_82A1DDC0(d + 0x2d4, src + 0x2cc, 700);
    fn_82A1DDC0(d + 0x590, src + 0x588, 1);
    fn_82A1DDC0(d + 0x594, src + 0x58c, 4);
    hr = 0;
  }
  return hr;
}
