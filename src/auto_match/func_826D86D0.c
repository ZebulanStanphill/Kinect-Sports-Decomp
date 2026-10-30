typedef struct { char *data; unsigned size; unsigned cap; } Vec_826D86D0;
extern void fn_82687EE0(char *p, unsigned n);
extern void fn_826D77A8(Vec_826D86D0 *v, int a, unsigned n);

void fn_826D86D0(Vec_826D86D0 *v, int a, unsigned n)
{
  unsigned m;
  if (n < v->size) {
    fn_82687EE0(v->data + n * 4, v->size - n);
    if (n >= v->cap >> 1) { v->size = n; return; }
    m = n;
  } else {
    if (n < v->cap) { v->size = n; return; }
    m = n + (n >> 2);
  }
  fn_826D77A8(v, a, m);
  v->size = n;
}
