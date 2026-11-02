extern void fn_82EE3838(void);
extern char lbl_8215FCC8[];
extern char lbl_8215FC78[];
extern int lbl_82154A78[];

typedef struct { void *vt0; void *vt1; int a, b; int q[4]; } Obj_82EE4B18;

Obj_82EE4B18 *fn_82EE4B18(Obj_82EE4B18 *p)
{
  fn_82EE3838();
  p->vt0 = lbl_8215FCC8;
  p->vt1 = lbl_8215FC78;
  p->q[0] = lbl_82154A78[0];
  p->q[1] = lbl_82154A78[1];
  p->q[2] = lbl_82154A78[2];
  p->q[3] = lbl_82154A78[3];
  return p;
}
