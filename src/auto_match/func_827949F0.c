typedef struct { char *data; unsigned size; unsigned cap; } Vec_827949F0;
extern void fn_82794848(void *p, unsigned n);
extern void fn_827948A0(Vec_827949F0 *v, int a, unsigned n);

void fn_827949F0(Vec_827949F0 *v, int a, unsigned n)
{
  unsigned m;
  if (n < v->size) {
    fn_82794848(v->data + n * 0x54, v->size - n);
    if (n >= (v->cap >> 1)) goto done;
    m = n;
  } else {
    if (n < v->cap) goto done;
    m = (n >> 2) + n;
  }
  fn_827948A0(v, a, m);
done:
  v->size = n;
}
