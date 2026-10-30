typedef struct { char *data; unsigned size; unsigned cap; } Vec_82676EB8;
extern void fn_82676C88(char *p, unsigned n);
extern void fn_82676CE8(Vec_82676EB8 *v, int a, unsigned n);

void fn_82676EB8(Vec_82676EB8 *v, int a, unsigned n)
{
  unsigned m;
  if (n < v->size) {
    fn_82676C88(v->data + n * 4, v->size - n);
    if (n >= v->cap >> 1) { v->size = n; return; }
    m = n;
  } else {
    if (n < v->cap) { v->size = n; return; }
    m = n + (n >> 2);
  }
  fn_82676CE8(v, a, m);
  v->size = n;
}
