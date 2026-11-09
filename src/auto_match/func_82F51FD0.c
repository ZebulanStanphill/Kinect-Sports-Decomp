typedef struct { int *vt; int pad4; long count; } Rc_82F51FD0;
typedef struct { int pad0; Rc_82F51FD0 *rep; } It_82F51FD0;
typedef struct { int px; int *rep; } SP_82F51FD0;
typedef struct { int pad0; int p4; } In_82F51FD0;
typedef struct { int pad0; In_82F51FD0 *in; } Obj_82F51FD0;
extern long _InterlockedDecrement(long *);
extern int *fn_82F57198(It_82F51FD0 *, int);
extern void fn_82517978(SP_82F51FD0 *, int, int, int);
extern int *fn_823D22D0(int);
extern void fn_822315A0(int *);

void fn_82F51FD0(Obj_82F51FD0 *o, unsigned char flag)
{
  It_82F51FD0 it;
  SP_82F51FD0 sp;
  int *r;
  int *dst;
  r = fn_82F57198(&it, o->in->p4);
  sp.px = 0;
  sp.rep = 0;
  fn_82517978(&sp, r[0], r[1], 0);
  dst = fn_823D22D0(sp.px);
  if (sp.rep != 0) {
    fn_822315A0(sp.rep);
  }
  if (it.rep != 0) {
    Rc_82F51FD0 *c = it.rep;
    if (_InterlockedDecrement(&c->count) == 0) {
      ((void (*)(Rc_82F51FD0 *))(c->vt[1]))(c);
    }
  }
  dst[4] = flag != 0;
}
