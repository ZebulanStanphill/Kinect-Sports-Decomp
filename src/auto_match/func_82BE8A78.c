typedef struct P { void *vt; char pad[0x54]; int x58; int x5c; short x60; short x62; short x64; } P;
extern void fn_82BF40D0(P *p);
extern char lbl_820E9B40[];
P *fn_82BE8A78(P *p)
{
  fn_82BF40D0(p);
  p->x58 = 2; p->x5c = 0; p->vt = lbl_820E9B40; p->x60 = 0; p->x62 = 0; p->x64 = 0;
  return p;
}
