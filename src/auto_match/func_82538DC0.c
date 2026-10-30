typedef struct { char b[0x38]; } Elem_82538DC0;
typedef struct { int pad; Elem_82538DC0 *last; Elem_82538DC0 *end; } Vec_82538DC0;
typedef struct { char pad[0x10]; Vec_82538DC0 *v; } Obj_82538DC0;
extern void fn_82268638(Elem_82538DC0 *);
extern void fn_82268D78(Elem_82538DC0 *);

Obj_82538DC0 *fn_82538DC0(Obj_82538DC0 *o)
{
  Elem_82538DC0 *p;
  if (o->v->last < o->v->end) {
    p = o->v->last;
    o->v->last = p + 1;
    fn_82268638(p);
  } else {
    p = o->v->last;
    if (p != 0)
      fn_82268D78(p);
    p = o->v->last + 1;
    o->v->last = p;
    o->v->end = p;
  }
  return o;
}
