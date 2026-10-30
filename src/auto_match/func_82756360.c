typedef struct { char *data; unsigned size; unsigned cap; } Vec_82756360;
extern void fn_827381E0(void *p, unsigned n);
extern void fn_827561F0(Vec_82756360 *v, int a, unsigned n);

void fn_82756360(Vec_82756360 *v, int a, unsigned n)
{
  unsigned m;
  if (n < v->size) {
    fn_827381E0(v->data + (n << 3), v->size - n);
    if (n >= (v->cap >> 1)) goto done;
    m = n;
  } else {
    if (n < v->cap) goto done;
    m = (n >> 2) + n;
  }
  fn_827561F0(v, a, m);
done:
  v->size = n;
}
