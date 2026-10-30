typedef struct { char *data; unsigned size; unsigned cap; } Vec_826838A8;
extern void fn_82683770(char *p, unsigned n);
extern void fn_826837C8(Vec_826838A8 *v, int a, unsigned n);

void fn_826838A8(Vec_826838A8 *v, int a, unsigned n)
{
  unsigned m;
  if (n < v->size) {
    fn_82683770(v->data + n * 16, v->size - n);
    if (n >= v->cap >> 1) { v->size = n; return; }
    m = n;
  } else {
    if (n < v->cap) { v->size = n; return; }
    m = n + (n >> 2);
  }
  fn_826837C8(v, a, m);
  v->size = n;
}
