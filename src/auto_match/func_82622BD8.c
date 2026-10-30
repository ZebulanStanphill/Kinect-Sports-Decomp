typedef struct Elem_82622BD8 { int a, b, c; } Elem_82622BD8;
typedef struct Vec_82622BD8 { Elem_82622BD8 *first; Elem_82622BD8 *last; Elem_82622BD8 *end; } Vec_82622BD8;
typedef struct Sys_82622BD8 { char pad[0x2a88]; void *h; } Sys_82622BD8;
typedef struct Obj_82622BD8 {
  Sys_82622BD8 *sys;
  void *p4;
  int pad8[2];
  Vec_82622BD8 v;
} Obj_82622BD8;
extern void fn_8262FEC8(void *);
extern void fn_82647460(Sys_82622BD8 *);
extern void fn_8265CA20(void *);
extern void *fn_82A1BB18(void);

Obj_82622BD8 *fn_82622BD8(Obj_82622BD8 *o)
{
  Sys_82622BD8 *s;
  Vec_82622BD8 *v;
  Elem_82622BD8 *e;
  fn_8262FEC8(o->p4);
  o->p4 = 0;
  s = o->sys;
  if (s->h != 0) {
    fn_82A1BB18();
  }
  s->h = fn_82A1BB18();
  fn_82647460(o->sys);
  o->sys = 0;
  v = &o->v;
  if (v->first != 0) {
    for (e = v->first; e != v->last; e++) {
    }
    fn_8265CA20(v->first);
  }
  v->first = 0;
  v->last = 0;
  v->end = 0;
  fn_8265CA20(o);
  return o;
}
