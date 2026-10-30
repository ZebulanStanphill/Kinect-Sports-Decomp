struct Obj_82897CE0;
typedef struct VT_82897CE0 { void *pad[8]; void (*f20)(struct Obj_82897CE0 *, void *, void *, void *, int *); } VT_82897CE0;
typedef struct Obj_82897CE0 { VT_82897CE0 *vt; } Obj_82897CE0;
extern Obj_82897CE0 *fn_828A12F0(void *a, int b);
extern int fn_828E9D90(void *a);
extern int fn_828E9DA8(void *a);
extern int fn_828E9FF8(void *a, int b);

void fn_82897CE0(void *a, void *b, void *c, int *out)
{
  int x, y, v;
  Obj_82897CE0 *o;

  *out = 0;
  x = fn_828E9DA8(b);
  y = fn_828E9D90(b);
  if (x - y >= 1) {
    v = fn_828E9FF8(b, 1);
  } else {
    v = 0;
  }
  o = fn_828A12F0(a, v);
  o->vt->f20(o, a, b, c, out);
}
