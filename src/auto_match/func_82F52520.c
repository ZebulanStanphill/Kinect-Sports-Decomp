typedef struct { int *vt; int pad4; long count; } Rc_82F52520;
typedef struct { int pad0; Rc_82F52520 *rep; } It_82F52520;
typedef struct { int px; int *rep; } SP_82F52520;
typedef struct { int pad0; int p4; } In_82F52520;
typedef struct { int pad0; In_82F52520 *in; } Obj_82F52520;
extern long _InterlockedDecrement(long *);
extern int *fn_82F57198(It_82F52520 *, int);
extern void fn_82517978(SP_82F52520 *, int, int, int);
extern int fn_82F5B378(int, int);
extern void fn_822315A0(int *);

int fn_82F52520(Obj_82F52520 *o, int arg)
{
  It_82F52520 it;
  SP_82F52520 sp;
  int *r;
  int res;
  r = fn_82F57198(&it, o->in->p4);
  sp.px = 0;
  sp.rep = 0;
  fn_82517978(&sp, r[0], r[1], 0);
  res = fn_82F5B378(sp.px, arg);
  if (sp.rep != 0) {
    fn_822315A0(sp.rep);
  }
  if (it.rep != 0) {
    Rc_82F52520 *c = it.rep;
    if (_InterlockedDecrement(&c->count) == 0) {
      ((void (*)(Rc_82F52520 *))(c->vt[1]))(c);
    }
  }
  return res;
}
