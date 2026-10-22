extern void fn_8265CA20(void *);

typedef struct { char data[0x1c]; } Elem;
typedef struct { Elem *first; Elem *last; Elem *end; } Vec;
typedef struct Obj { void (**vtbl)(struct Obj *, int); } Obj;

int fn_823393D8(int param_1)
{
  Obj *o;
  Vec *v;
  Elem *e;

  o = *(Obj **)(param_1 + 0x198);
  if (o != 0) {
    (*o->vtbl[0])(o, 1);
  }
  v = *(Vec **)(param_1 + 0x194);
  if (v != 0) {
    if (v->first != 0) {
      for (e = v->first; e != v->last; e++) {
      }
      fn_8265CA20(v->first);
    }
    v->first = 0;
    v->last = 0;
    v->end = 0;
    fn_8265CA20(v);
  }
  fn_8265CA20((void *)param_1);
  return param_1;
}
