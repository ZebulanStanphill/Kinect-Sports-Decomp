extern void fn_82EE4B18(void);
extern char lbl_8215FD04[];
extern char lbl_8215FC78[];
extern int lbl_821549D8[];

typedef struct { void *vt0; void *vt1; int a, b; int q[4]; } Obj_82EE4B88;

Obj_82EE4B88 *fn_82EE4B88(Obj_82EE4B88 *p)
{
  fn_82EE4B18();
  p->vt0 = lbl_8215FD04;
  p->vt1 = lbl_8215FC78;
  p->q[0] = lbl_821549D8[0];
  p->q[1] = lbl_821549D8[1];
  p->q[2] = lbl_821549D8[2];
  p->q[3] = lbl_821549D8[3];
  return p;
}
