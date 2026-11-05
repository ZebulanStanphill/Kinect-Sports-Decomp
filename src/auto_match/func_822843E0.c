typedef struct { char pad0[0xc]; char b0c[0x1c]; int f28; int f2c; float f30; char pad34[8]; char b3c[0x1f8]; } Ent_822843E0;
extern void fn_82A1DD38(void *, int, int);
extern void fn_82F64988(void *, int, int);

void fn_822843E0(Ent_822843E0 *base, int a, int b, float x, int idx)
{
  Ent_822843E0 *e = base + idx;
  char *s = e->b0c;
  e->f30 = x;
  e->f2c = 1;
  e->f28 = 1;
  fn_82A1DD38(s, a, 0x18);
  fn_82F64988(s + 0x30, 0x100, b);
}
