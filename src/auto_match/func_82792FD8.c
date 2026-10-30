typedef struct { char *data; unsigned size; unsigned cap; } Vec_82792FD8;
extern void fn_827906D0(void *p, unsigned n);
extern void fn_82792350(Vec_82792FD8 *v, int a, unsigned n);

void fn_82792FD8(Vec_82792FD8 *v, int a, unsigned n)
{
  unsigned m;
  if (n < v->size) {
    fn_827906D0(v->data + n * 0xc, v->size - n);
    if (n >= (v->cap >> 1)) goto done;
    m = n;
  } else {
    if (n < v->cap) goto done;
    m = (n >> 2) + n;
  }
  fn_82792350(v, a, m);
done:
  v->size = n;
}
