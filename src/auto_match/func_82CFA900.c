struct Inner_82CFA900;
typedef struct VT_82CFA900 {
  void *f[10];
  void (*f28)(struct Inner_82CFA900 *);
} VT_82CFA900;
typedef struct Inner_82CFA900 {
  VT_82CFA900 *vt;
} Inner_82CFA900;
typedef struct Obj_82CFA900 {
  int pad0[2];
  Inner_82CFA900 *inner;
  int pad1[1];
  int f10;
  int f14;
  int pad2[1];
  int f1c;
  int f20;
} Obj_82CFA900;

void fn_82CFA900(Obj_82CFA900 *o)
{
  o->f1c = -1;
  o->f20 = -1;
  o->f10 = 0;
  o->f14 = 0;
  o->inner->vt->f28(o->inner);
}
