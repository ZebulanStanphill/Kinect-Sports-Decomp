extern void fn_82EE14B8(void);
extern char lbl_8215FA98[];
extern char lbl_8215FDD0[];
extern int lbl_820ED078[];

typedef struct { void *vt0; void *vt1; int a, b; int q[4]; } Obj_82EE1F78;

Obj_82EE1F78 *fn_82EE1F78(Obj_82EE1F78 *p)
{
  fn_82EE14B8();
  p->vt0 = lbl_8215FA98;
  p->vt1 = lbl_8215FDD0;
  p->q[0] = lbl_820ED078[0];
  p->q[1] = lbl_820ED078[1];
  p->q[2] = lbl_820ED078[2];
  p->q[3] = lbl_820ED078[3];
  return p;
}
