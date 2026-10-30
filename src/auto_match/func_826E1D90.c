typedef struct { char *data; unsigned size; unsigned cap; } Vec_826E1D90;
extern void fn_826D85F0(char *p, unsigned n);
extern void fn_82792350(Vec_826E1D90 *v, int a, unsigned n);

void fn_826E1D90(Vec_826E1D90 *v, int a, unsigned n)
{
  unsigned m;
  if (n < v->size) {
    fn_826D85F0(v->data + n * 12, v->size - n);
    if (n >= v->cap >> 1) { v->size = n; return; }
    m = n;
  } else {
    if (n < v->cap) { v->size = n; return; }
    m = n + (n >> 2);
  }
  fn_82792350(v, a, m);
  v->size = n;
}
