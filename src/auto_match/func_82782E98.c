typedef struct { int *data; unsigned size; int c; } Vec;
typedef struct { int a0; Vec v; } Obj;
extern void fn_8277B4A0(int, int);
extern void fn_8273D528(Vec *, int);

Obj *fn_82782E98(Obj *o, int a, int b)
{
  Vec *v = &o->v;
  unsigned i;
  o->a0 = a;
  v->data = 0;
  v->size = 0;
  v->c = 0;
  fn_8277B4A0(o->a0, b);
  fn_8273D528(v, b);
  for (i = 0; i < o->v.size; i++) {
    v->data[i] = -1;
  }
  return o;
}
