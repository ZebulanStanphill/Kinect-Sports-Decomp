typedef struct Node_82772D08 { void *vt; char pad[0x24]; int f28; } Node_82772D08;
typedef struct Obj_82772D08 { void *vt; char pad[0x88]; Node_82772D08 *f8c; Node_82772D08 *f90; int f94, f98, f9c, fa0, fa4, fa8, fac, fb0, fb4, fb8, fbc, fc0, fc4, fc8, fcc; } Obj_82772D08;
extern void fn_826D8050(Obj_82772D08 *o);
extern Node_82772D08 *fn_8267BED0(Obj_82772D08 *o, int size, int *flags);
extern void fn_827626A0(Node_82772D08 *n);
extern char lbl_820148F8[];
extern char lbl_82015278[];

Obj_82772D08 *fn_82772D08(Obj_82772D08 *o)
{
  Node_82772D08 *n;
  int a, b;
  Node_82772D08 *m;
  fn_826D8050(o);
  o->vt = lbl_82015278;
  { int *z = &o->f94; z[0]=0; z[1]=0; z[2]=0; z[3]=0; z[4]=0; z[5]=0; z[6]=0; z[7]=0; z[8]=0; z[9]=0; z[10]=0; z[11]=0; z[12]=0; z[13]=0; z[14]=0; }
  a = 0x102;
  m = fn_8267BED0(o, 0x2c, &a);
  if (m != 0) {
    fn_827626A0(m);
    m->vt = lbl_820148F8;
    m->f28 = 0;
    n = m;
  } else {
    n = 0;
  }
  o->f8c = n;
  b = 0x102;
  m = fn_8267BED0(o, 0x2c, &b);
  if (m != 0) {
    fn_827626A0(m);
    m->vt = lbl_820148F8;
    m->f28 = 0;
    n = m;
  } else {
    n = 0;
  }
  o->f90 = n;
  return o;
}
