typedef struct P { void *vt; char pad[0x28]; int x2c; unsigned __int64 x30; int x38; int x3c; } P;
extern void fn_82C06348(P *p);
extern char lbl_820EC870[];
P *fn_82C04AF8(P *p)
{
  fn_82C06348(p);
  p->x2c = 1;
  p->x30 = 0;
  p->vt = lbl_820EC870;
  p->x38 = 0;
  p->x3c = 0;
  return p;
}
