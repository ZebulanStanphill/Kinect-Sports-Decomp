typedef struct { char *data; unsigned size; unsigned cap; } Vec_826CBF70;
extern void fn_826DF960(char *p, unsigned n);
extern void fn_826C8BD8(Vec_826CBF70 *v, int a, unsigned n);

void fn_826CBF70(Vec_826CBF70 *v, int a, unsigned n)
{
  unsigned m;
  if (n < v->size) {
    fn_826DF960(v->data + n * 4, v->size - n);
    if (n >= v->cap >> 1) { v->size = n; return; }
    m = n;
  } else {
    if (n < v->cap) { v->size = n; return; }
    m = n + (n >> 2);
  }
  fn_826C8BD8(v, a, m);
  v->size = n;
}
