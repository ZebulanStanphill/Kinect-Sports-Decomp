typedef struct { char *data; unsigned size; unsigned cap; } Vec_8269CF58;
extern void fn_8269A990(char *p, unsigned n);
extern void fn_8269B308(Vec_8269CF58 *v, int a, unsigned n);

void fn_8269CF58(Vec_8269CF58 *v, int a, unsigned n)
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
  fn_8269B308(v, a, m);
  v->size = n;
}
