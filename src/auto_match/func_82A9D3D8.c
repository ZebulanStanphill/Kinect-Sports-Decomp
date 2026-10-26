typedef struct { int *data; unsigned int size; unsigned int cap; } Vec;
extern void fn_82A9CFC8(Vec *, unsigned int);

void fn_82A9D3D8(Vec *v, const int *src)
{
  unsigned int n = v->size + 1;
  if (n > v->cap) {
    fn_82A9CFC8(v, n);
  }
  v->data[v->size] = *src;
  v->size++;
}
