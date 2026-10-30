typedef struct { char *data; unsigned size; unsigned cap; } Vec_826E1F68;
extern void fn_826DF5F0(char *p, unsigned n);
extern void fn_826E1E70(Vec_826E1F68 *v, int a, unsigned n);

void fn_826E1F68(Vec_826E1F68 *v, int a, unsigned n)
{
  unsigned m;
  if (n < v->size) {
    fn_826DF5F0(v->data + n * 40, v->size - n);
    if (n >= v->cap >> 1) { v->size = n; return; }
    m = n;
  } else {
    if (n < v->cap) { v->size = n; return; }
    m = n + (n >> 2);
  }
  fn_826E1E70(v, a, m);
  v->size = n;
}
