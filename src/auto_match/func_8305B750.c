typedef struct VT_8305B750 {
  void *s[5];
  void (*f14)(void *, void *);
  void (*f18)(void *, void *);
  void (*f1c)(void *, void *);
} VT_8305B750;
typedef struct Obj_8305B750 {
  VT_8305B750 *vt;
  int f4;
  void *f8;
  void *fc;
  void *f10;
} Obj_8305B750;

void fn_8305B750(Obj_8305B750 *o)
{
  if (o->f8 != 0) {
    o->vt->f14(o, o->f8);
  }
  if (o->fc != 0) {
    o->vt->f18(o, o->fc);
  }
  if (o->f10 != 0) {
    o->vt->f1c(o, o->f10);
  }
}
