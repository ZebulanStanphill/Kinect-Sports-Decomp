typedef struct { char *data; unsigned size; unsigned cap; } Vec_82730710;
extern void fn_827263F8(void *p, unsigned n);
extern void fn_82730000(Vec_82730710 *v, int a, unsigned n);

void fn_82730710(Vec_82730710 *v, int a, unsigned n)
{
  unsigned m;
  if (n < v->size) {
    fn_827263F8(v->data + n * 0x14, v->size - n);
    if (n >= (v->cap >> 1)) goto done;
    m = n;
  } else {
    if (n < v->cap) goto done;
    m = (n >> 2) + n;
  }
  fn_82730000(v, a, m);
done:
  v->size = n;
}
