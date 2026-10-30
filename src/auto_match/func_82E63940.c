typedef struct P { void *vt; char pad[0x48]; int x4c; int x50; int x54; int x58; int x5c; } P;
extern void fn_82E638D8(P *p, int a);
extern char lbl_82154F90[];
P *fn_82E63940(P *p)
{
  fn_82E638D8(p, 0);
  p->x4c = 1; p->x54 = 0; p->vt = lbl_82154F90; p->x58 = 0; p->x5c = 0;
  return p;
}
