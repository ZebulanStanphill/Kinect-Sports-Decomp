typedef struct { int a, b; } Elem;
typedef struct { Elem *data; unsigned int size; } Vec;
extern int fn_8267E828(Vec *v, Vec *v2, unsigned int n);

void fn_8267E910(Vec *v, Elem *src)
{
  Elem *e;

  fn_8267E828(v, v, v->size + 1);
  e = &v->data[v->size] - 1;
  if (e != 0) {
    e->a = src->a;
    e->b = src->b;
  }
}
