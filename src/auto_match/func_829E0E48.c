typedef struct { int a[4]; } Out_829E0E48;
typedef struct { char pad[0xc]; unsigned short id; } Ctx_829E0E48;
extern unsigned int *fn_829E0C20(Ctx_829E0E48 *c, unsigned short id);
extern void fn_82A1DDC0(void *d, void *s, int n);
extern int fn_829E0DC0(Out_829E0E48 *out, unsigned int i, Ctx_829E0E48 *ctx, unsigned short id);

int fn_829E0E48(Out_829E0E48 *out, Ctx_829E0E48 *ctx, unsigned short id)
{
  unsigned int *hdr;
  int hr;
  unsigned int i;
  unsigned short *p;

  if (id == 0) {
    return 0x80004005;
  }
  hdr = fn_829E0C20(ctx, id);
  if (hdr == 0) {
    return 0x80004005;
  }
  fn_82A1DDC0(out, hdr + 2, 0x10);
  p = (unsigned short *)((char *)hdr + (*hdr >> 14));
  for (i = 0; i < 8; i++) {
    if (*p == 0) {
      return 0x80004005;
    }
    hr = fn_829E0DC0(out, i, ctx, *p);
    if (hr < 0) {
      return hr;
    }
    p++;
  }
  return 0;
}
