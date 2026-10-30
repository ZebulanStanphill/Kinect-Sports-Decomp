typedef struct Obj_8248A290 { struct ObjVt_8248A290 *vt; } Obj_8248A290;
typedef struct ObjVt_8248A290 { void (*dtor)(Obj_8248A290 *, int); } ObjVt_8248A290;
typedef struct Vec_8248A290 { unsigned begin; unsigned end; unsigned cap; } Vec_8248A290;
typedef struct Owner_8248A290 {
  Vec_8248A290 a;
  char pad0c[0x14];
  Vec_8248A290 b;
  char pad2c[8];
  char sub[0x1c];
  Vec_8248A290 c;
} Owner_8248A290;
extern void fn_82230300(void *, int, int);
extern void fn_8265CA20(void *);

static __inline void Clr_8248A290(Vec_8248A290 *v)
{
  v->begin = 0;
  v->end = 0;
  v->cap = 0;
}

Owner_8248A290 *fn_8248A290(Owner_8248A290 *o)
{
  unsigned i;
  for (i = 0; i < (unsigned)((int)(o->a.end - o->a.begin) >> 2); i++) {
    Obj_8248A290 *p = *(Obj_8248A290 **)(i * 4 + o->a.begin);
    if (p != 0)
      p->vt->dtor(p, 1);
  }
  if (o->c.begin != 0)
    fn_8265CA20((void *)o->c.begin);
  o->c.begin = 0;
  o->c.end = 0;
  o->c.cap = 0;
  fn_82230300(o->sub, 1, 0);
  if (o->b.begin != 0)
    fn_8265CA20((void *)o->b.begin);
  Clr_8248A290(&o->b);
  if (o->a.begin != 0)
    fn_8265CA20((void *)o->a.begin);
  o->a.begin = 0;
  o->a.end = 0;
  o->a.cap = 0;
  fn_8265CA20(o);
  return o;
}
