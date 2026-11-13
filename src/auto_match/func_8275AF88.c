typedef struct Inner_8275AF88 { char pad[0x10]; int f10; int pad14; int f18; } Inner_8275AF88;
typedef struct Desc_8275AF88 {
  char pad0[8]; Inner_8275AF88 *inner; int fc; char pad10[8]; int f18; char pad1c[4]; int f20;
  char pad24[0x14]; int f38; char pad3c[8]; unsigned char f44;
} Desc_8275AF88;
extern void *fn_8275ADD0(void *ctx, int a, int b, int c, int d, int e, unsigned char f);
extern void fn_82687270(void *p);

unsigned char fn_8275AF88(void *self, void *ctx, void **out, Desc_8275AF88 *d)
{
  void *p = fn_8275ADD0(ctx, d->f38, d->inner->f18, d->inner->f10, d->f20, d->fc, d->f44 != 0 || d->f18 != 0);
  if (*out != 0) fn_82687270(*out);
  *out = p;
  return p != 0;
}
