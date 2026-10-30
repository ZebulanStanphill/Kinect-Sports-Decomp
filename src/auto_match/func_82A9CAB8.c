typedef struct Elem_82A9CAB8 { unsigned int a, b, c, d; } Elem_82A9CAB8;
typedef struct Vec_82A9CAB8 { Elem_82A9CAB8 *data; unsigned int size; unsigned int cap; } Vec_82A9CAB8;
extern void fn_82A9A278(Vec_82A9CAB8 *v, unsigned int n);

void fn_82A9CAB8(Vec_82A9CAB8 *v, Elem_82A9CAB8 *e)
{
  unsigned int n = v->size + 1;
  if (n > v->cap) {
    fn_82A9A278(v, n);
  }
  v->data[v->size] = *e;
  v->size = v->size + 1;
}
