extern void fn_82EE1FE8(void);
extern char lbl_8215FAE0[];
extern char lbl_8215FDD0[];
extern int lbl_82154A38[];

typedef struct { void *vt0; void *vt1; int a, b; int q[4]; } Obj_82EE2060;

Obj_82EE2060 *fn_82EE2060(Obj_82EE2060 *p)
{
  fn_82EE1FE8();
  p->vt0 = lbl_8215FAE0;
  p->vt1 = lbl_8215FDD0;
  p->q[0] = lbl_82154A38[0];
  p->q[1] = lbl_82154A38[1];
  p->q[2] = lbl_82154A38[2];
  p->q[3] = lbl_82154A38[3];
  return p;
}
