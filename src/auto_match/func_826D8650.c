typedef struct { char *data; unsigned size; unsigned cap; } Vec_826D8650;
extern void fn_82687EE0(char *p, unsigned n);
extern void fn_8273CE60(Vec_826D8650 *v, int a, unsigned n);

void fn_826D8650(Vec_826D8650 *v, int a, unsigned n)
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
  fn_8273CE60(v, a, m);
  v->size = n;
}
