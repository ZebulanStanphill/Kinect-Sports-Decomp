typedef struct { int *vt; int pad4; long count; } Rc_82F52428;
typedef struct { int pad0; Rc_82F52428 *rep; } It_82F52428;
typedef struct { int px; int *rep; } SP_82F52428;
typedef struct { int pad0; int p4; } In_82F52428;
typedef struct { int pad0; In_82F52428 *in; } Obj_82F52428;
extern long _InterlockedDecrement(long *);
extern int *fn_82F57198(It_82F52428 *, int);
extern void fn_82517978(SP_82F52428 *, int, int, int);
extern int fn_82F5B310(int, int, int, int);
extern void fn_822315A0(int *);
extern int fn_82F4FEA0(int);
extern float fn_82F52348(Obj_82F52428 *, int);

int fn_82F52428(Obj_82F52428 *o, int a, int b, int c, float *out)
{
  It_82F52428 it;
  SP_82F52428 sp;
  int *r;
  int res;
  r = fn_82F57198(&it, o->in->p4);
  sp.px = 0;
  sp.rep = 0;
  fn_82517978(&sp, r[0], r[1], 0);
  res = fn_82F5B310(sp.px, a, b, c);
  if (sp.rep != 0) {
    fn_822315A0(sp.rep);
  }
  if (it.rep != 0) {
    Rc_82F52428 *rc = it.rep;
    if (_InterlockedDecrement(&rc->count) == 0) {
      ((void (*)(Rc_82F52428 *))(rc->vt[1]))(rc);
    }
  }
  if (out != 0) {
    *out = fn_82F52348(o, fn_82F4FEA0(a));
  }
  return res;
}
