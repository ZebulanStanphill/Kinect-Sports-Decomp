typedef struct { char *data; unsigned size; unsigned cap; } Vec_826A5188;
extern void fn_826A4B58(char *p, unsigned n);
extern void fn_826A4D08(Vec_826A5188 *v, int a, unsigned n);

void fn_826A5188(Vec_826A5188 *v, int a, unsigned n)
{
  unsigned m;
  if (n < v->size) {
    fn_826A4B58(v->data + n * 28, v->size - n);
    if (n >= v->cap >> 1) { v->size = n; return; }
    m = n;
  } else {
    if (n < v->cap) { v->size = n; return; }
    m = n + (n >> 2);
  }
  fn_826A4D08(v, a, m);
  v->size = n;
}
