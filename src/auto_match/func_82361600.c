typedef struct SP_82361600 { int ptr; int *rep; } SP_82361600;
typedef struct Loc_82361600 { int a; int *rep; SP_82361600 sp; } Loc_82361600;
typedef struct Iface_82361600 Iface_82361600;
typedef struct Vt_82361600 { char pad[0x14]; void (*f14)(Iface_82361600 *, int, int); } Vt_82361600;
struct Iface_82361600 { Vt_82361600 *vt; };
typedef struct Obj_82361600 { char pad[8]; Iface_82361600 *h; } Obj_82361600;
extern void fn_822315A0(int *);
extern SP_82361600 *fn_82361BA0(Loc_82361600 *);

void fn_82361600(Obj_82361600 *o, int a, SP_82361600 *sp)
{
  int v;
  if (sp != 0) {
    if (sp->ptr == 0) {
      Loc_82361600 loc;
      SP_82361600 *r = fn_82361BA0(&loc);
      int np = 0;
      int *nr = 0;
      int *old;
      if (&loc.sp != r) {
        int *q = &r->rep;
        nr = *q;
        *q = 0;
        np = r->ptr;
        r->ptr = 0;
      }
      old = sp->rep;
      sp->rep = nr;
      sp->ptr = np;
      if (old != 0) {
        fn_822315A0(old);
      }
      if (loc.rep != 0) {
        fn_822315A0(loc.rep);
      }
    }
    v = sp->ptr;
  }
  else {
    v = 0;
  }
  o->h->vt->f14(o->h, a, v);
}
