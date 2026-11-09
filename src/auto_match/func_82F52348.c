/* Same shape as fn_82F52520: looks up a shared pointer through the object's inner record,
   evaluates fn_82F5A690 (float result) on it, then releases both reference counts. */
typedef struct { int *vt; int pad4; long count; } Rc_82F52348;
typedef struct { int pad0; Rc_82F52348 *rep; } It_82F52348;
typedef struct { int px; int *rep; } SP_82F52348;
typedef struct { int p0; } In_82F52348;
typedef struct { int pad0; In_82F52348 *in; } Obj_82F52348;
extern long _InterlockedDecrement(long *);
extern int *fn_82F57338(It_82F52348 *, int);
extern void fn_82517978(SP_82F52348 *, int, int, int);
extern int fn_82F4FF20(int);
extern float fn_82F5A690(int, int);
extern void fn_822315A0(int *);
float fn_82F52348(Obj_82F52348 *o, int arg)
{
  It_82F52348 it;
  SP_82F52348 sp;
  int *r;
  float res;
  r = fn_82F57338(&it, o->in->p0);
  sp.px = 0;
  sp.rep = 0;
  fn_82517978(&sp, r[0], r[1], 0);
  res = fn_82F5A690(sp.px, fn_82F4FF20(arg));
  if (sp.rep != 0) {
    fn_822315A0(sp.rep);
  }
  if (it.rep != 0) {
    Rc_82F52348 *c = it.rep;
    if (_InterlockedDecrement(&c->count) == 0) {
      ((void (*)(Rc_82F52348 *))(c->vt[1]))(c);
    }
  }
  return res;
}
