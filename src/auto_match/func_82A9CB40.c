typedef struct Elem_82A9CB40 { unsigned char a, b; } Elem_82A9CB40;
typedef struct Vec_82A9CB40 { Elem_82A9CB40 *data; unsigned int size; unsigned int cap; } Vec_82A9CB40;
extern void fn_82A9A398(Vec_82A9CB40 *v, unsigned int n);

void fn_82A9CB40(Vec_82A9CB40 *v, Elem_82A9CB40 *e)
{
  unsigned int n = v->size + 1;
  if (n > v->cap) {
    fn_82A9A398(v, n);
  }
  v->data[v->size] = *e;
  v->size = v->size + 1;
}
