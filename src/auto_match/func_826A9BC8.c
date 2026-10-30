typedef struct { char *data; unsigned size; unsigned cap; } Vec_826A9BC8;
extern void fn_826A8DF8(char *p, unsigned n);
extern void fn_826A8F08(Vec_826A9BC8 *v, int a, unsigned n);

void fn_826A9BC8(Vec_826A9BC8 *v, int a, unsigned n)
{
  unsigned m;
  if (n < v->size) {
    fn_826A8DF8(v->data + n * 8, v->size - n);
    if (n >= v->cap >> 1) { v->size = n; return; }
    m = n;
  } else {
    if (n < v->cap) { v->size = n; return; }
    m = n + (n >> 2);
  }
  fn_826A8F08(v, a, m);
  v->size = n;
}
