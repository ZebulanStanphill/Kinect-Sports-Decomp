typedef struct { char *data; unsigned size; unsigned cap; } Vec_82716398;
extern void fn_82715C98(void *p, unsigned n);
extern void fn_82715D50(Vec_82716398 *v, int a, unsigned n);

void fn_82716398(Vec_82716398 *v, int a, unsigned n)
{
  unsigned m;
  if (n < v->size) {
    fn_82715C98(v->data + n * 0x4c, v->size - n);
    if (n >= (v->cap >> 1)) goto done;
    m = n;
  } else {
    if (n < v->cap) goto done;
    m = (n >> 2) + n;
  }
  fn_82715D50(v, a, m);
done:
  v->size = n;
}
