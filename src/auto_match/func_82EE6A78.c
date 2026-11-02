extern void fn_82E72738(void);
extern char lbl_8215FDE4[];
extern char lbl_8215FDD0[];
extern int lbl_82154A08[];

typedef struct { void *vt0; void *vt1; int a, b; int q[4]; } Obj_82EE6A78;

Obj_82EE6A78 *fn_82EE6A78(Obj_82EE6A78 *p)
{
  fn_82E72738();
  p->vt0 = lbl_8215FDE4;
  p->vt1 = lbl_8215FDD0;
  p->q[0] = lbl_82154A08[0];
  p->q[1] = lbl_82154A08[1];
  p->q[2] = lbl_82154A08[2];
  p->q[3] = lbl_82154A08[3];
  return p;
}
