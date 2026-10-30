typedef struct { char *data; unsigned size; unsigned cap; } Vec_826AF7B8;
extern void fn_826AE560(char *p, unsigned n);
extern void fn_82768EA0(Vec_826AF7B8 *v, int a, unsigned n);

void fn_826AF7B8(Vec_826AF7B8 *v, int a, unsigned n)
{
  unsigned m;
  if (n < v->size) {
    fn_826AE560(v->data + n * 4, v->size - n);
    if (n >= v->cap >> 1) { v->size = n; return; }
    m = n;
  } else {
    if (n < v->cap) { v->size = n; return; }
    m = n + (n >> 2);
  }
  fn_82768EA0(v, a, m);
  v->size = n;
}
