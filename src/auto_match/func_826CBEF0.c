typedef struct { char *data; unsigned size; unsigned cap; } Vec_826CBEF0;
extern void fn_8269A990(char *p, unsigned n);
extern void fn_826C8B48(Vec_826CBEF0 *v, int a, unsigned n);

void fn_826CBEF0(Vec_826CBEF0 *v, int a, unsigned n)
{
  unsigned m;
  if (n < v->size) {
    fn_8269A990(v->data + n * 16, v->size - n);
    if (n >= v->cap >> 1) { v->size = n; return; }
    m = n;
  } else {
    if (n < v->cap) { v->size = n; return; }
    m = n + (n >> 2);
  }
  fn_826C8B48(v, a, m);
  v->size = n;
}
