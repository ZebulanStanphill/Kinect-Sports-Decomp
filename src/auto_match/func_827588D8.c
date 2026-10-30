typedef struct { char *data; unsigned size; unsigned cap; } Vec_827588D8;
extern void fn_82758500(void *p, unsigned n);
extern void fn_827587C0(Vec_827588D8 *v, int a, unsigned n);

void fn_827588D8(Vec_827588D8 *v, int a, unsigned n)
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
  fn_827587C0(v, a, m);
done:
  v->size = n;
}
