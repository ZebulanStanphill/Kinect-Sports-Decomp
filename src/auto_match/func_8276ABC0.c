typedef struct { char *data; unsigned size; unsigned cap; } Vec_8276ABC0;
extern void fn_82768D80(void *p, unsigned n);
extern void fn_82768EA0(Vec_8276ABC0 *v, int a, unsigned n);

void fn_8276ABC0(Vec_8276ABC0 *v, int a, unsigned n)
{
  unsigned m;
  if (n < v->size) {
    fn_82768D80(v->data + (n << 2), v->size - n);
    if (n >= (v->cap >> 1)) goto done;
    m = n;
  } else {
    if (n < v->cap) goto done;
    m = (n >> 2) + n;
  }
  fn_82768EA0(v, a, m);
done:
  v->size = n;
}
