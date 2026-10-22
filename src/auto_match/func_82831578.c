typedef struct Obj { void (**vtbl)(struct Obj *, int); } Obj;
typedef struct Arr { int x0; unsigned int count; Obj **items; } Arr;
extern void fn_8265CAA0(void *);

void fn_82831578(Arr *a)
{
  unsigned int i;
  Obj *o;

  if (a->items != 0) {
    for (i = 0; i < a->count; i++) {
      o = a->items[i];
      if (o != 0)
        o->vtbl[0](o, 1);
    }
    fn_8265CAA0(a->items);
  }
}
