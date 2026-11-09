typedef struct Ent_823302E0 { int f0; unsigned f4; } Ent_823302E0;
typedef struct Vec_823302E0 {
  Ent_823302E0 *first;
  Ent_823302E0 *last;
  Ent_823302E0 *end;
  int fc;
  char f10[8];
} Vec_823302E0;
typedef struct Obj_823302E0 {
  char pad0[0x10];
  Vec_823302E0 v;
} Obj_823302E0;
extern void fn_822315A0(unsigned);
extern void fn_82359C18(void *);
extern void fn_8265CA20(void *);

static __inline void Destroy(Ent_823302E0 *p, Ent_823302E0 *e)
{
  for (; p != e; p++) {
    if (p->f4 != 0) fn_822315A0(p->f4);
  }
}

void fn_823302E0(Obj_823302E0 *o)
{
  Vec_823302E0 *v = &o->v;
  fn_82359C18(v->f10);
  if (v->first != 0) {
    Destroy(v->first, v->last);
    fn_8265CA20(v->first);
  }
  v->first = 0;
  v->last = 0;
  v->end = 0;
}
