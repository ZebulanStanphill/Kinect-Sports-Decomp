typedef struct Elem_82A9CBB8 { unsigned char a, b, c, d; } Elem_82A9CBB8;
typedef struct Vec_82A9CBB8 { Elem_82A9CBB8 *data; unsigned int size; unsigned int cap; } Vec_82A9CBB8;
extern void fn_82A9CFC8(Vec_82A9CBB8 *v, unsigned int n);

void fn_82A9CBB8(Vec_82A9CBB8 *v, Elem_82A9CBB8 *e)
{
  unsigned int n = v->size + 1;
  if (n > v->cap) {
    fn_82A9CFC8(v, n);
  }
  v->data[v->size] = *e;
  v->size = v->size + 1;
}
