typedef struct { char *data; unsigned size; unsigned cap; } Vec_82761138;
extern void fn_82758500(void *p, unsigned n);
extern void fn_827602A0(Vec_82761138 *v, int a, unsigned n);

void fn_82761138(Vec_82761138 *v, int a, unsigned n)
{
  unsigned m;
  if (n < v->size) {
    fn_82758500(v->data + n * 0x18, v->size - n);
    if (n >= (v->cap >> 1)) goto done;
    m = n;
  } else {
    if (n < v->cap) goto done;
    m = (n >> 2) + n;
  }
  fn_827602A0(v, a, m);
done:
  v->size = n;
}
