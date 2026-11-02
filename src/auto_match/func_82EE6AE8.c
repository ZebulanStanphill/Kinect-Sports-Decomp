extern void fn_82F36CB0(void);
extern char lbl_8215FE18[];
extern char lbl_8215FE94[];
extern int lbl_82154AE8[];

typedef struct { void *vt0; void *vt1; int a, b; int q[4]; } Obj_82EE6AE8;

Obj_82EE6AE8 *fn_82EE6AE8(Obj_82EE6AE8 *p)
{
  fn_82F36CB0();
  p->vt0 = lbl_8215FE18;
  p->vt1 = lbl_8215FE94;
  p->q[0] = lbl_82154AE8[0];
  p->q[1] = lbl_82154AE8[1];
  p->q[2] = lbl_82154AE8[2];
  p->q[3] = lbl_82154AE8[3];
  return p;
}
