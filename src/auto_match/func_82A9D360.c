typedef struct Elem_82A9D360 { unsigned int a, b; } Elem_82A9D360;
typedef struct Vec_82A9D360 { Elem_82A9D360 *data; unsigned int size; unsigned int cap; } Vec_82A9D360;
extern void fn_82A9CF38(Vec_82A9D360 *v, unsigned int n);

void fn_82A9D360(Vec_82A9D360 *v, Elem_82A9D360 *e)
{
  unsigned int n = v->size + 1;
  if (n > v->cap) {
    fn_82A9CF38(v, n);
  }
  v->data[v->size] = *e;
  v->size = v->size + 1;
}
