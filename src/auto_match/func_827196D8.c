typedef struct { char *data; unsigned size; unsigned cap; } Vec_827196D8;
extern void fn_82716F98(void *p, unsigned n);
extern void fn_82719640(Vec_827196D8 *v, int a, unsigned n);

void fn_827196D8(Vec_827196D8 *v, int a, unsigned n)
{
  unsigned m;
  if (n < v->size) {
    fn_82716F98(v->data + (n << 4), v->size - n);
    if (n >= (v->cap >> 1)) goto done;
    m = n;
  } else {
    if (n < v->cap) goto done;
    m = (n >> 2) + n;
  }
  fn_82719640(v, a, m);
done:
  v->size = n;
}
