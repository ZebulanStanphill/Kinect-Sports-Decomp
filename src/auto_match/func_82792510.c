typedef struct { char *data; unsigned size; unsigned cap; } Vec_82792510;
extern void fn_82726458(void *p, unsigned n);
extern void fn_827915B8(Vec_82792510 *v, int a, unsigned n);

void fn_82792510(Vec_82792510 *v, int a, unsigned n)
{
  unsigned m;
  if (n < v->size) {
    fn_82726458(v->data + n * 0x2c, v->size - n);
    if (n >= (v->cap >> 1)) goto done;
    m = n;
  } else {
    if (n < v->cap) goto done;
    m = (n >> 2) + n;
  }
  fn_827915B8(v, a, m);
done:
  v->size = n;
}
