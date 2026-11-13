typedef struct Pair_82571368 {
  void *a;
  void *b;
} Pair_82571368;
typedef struct Quad_82571368 {
  void *a;
  void *b;
  void *c;
  void *d;
} Quad_82571368;
typedef struct Obj_82571368 {
  char pad0[0x14];
  char sub14[0x18];
  Quad_82571368 q;
  char pad3c[0x90 - 0x3c];
  Pair_82571368 p;
} Obj_82571368;
extern void fn_82522ED8(void *);
extern void fn_8251E400(void *);

void fn_82571368(Obj_82571368 *o)
{
  Pair_82571368 *p = &o->p;
  Quad_82571368 *q;
  if (p->a != 0) { fn_82522ED8(p->a); p->a = 0; }
  if (p->b != 0) { fn_82522ED8(p->b); p->b = 0; }
  q = &o->q;
  if (q->a != 0) { fn_82522ED8(q->a); q->a = 0; }
  if (q->b != 0) { fn_82522ED8(q->b); q->b = 0; }
  if (q->c != 0) { fn_82522ED8(q->c); q->c = 0; }
  if (q->d != 0) { fn_82522ED8(q->d); q->d = 0; }
  fn_8251E400(o->sub14);
  fn_8251E400(o);
}
