typedef struct { char *data; unsigned size; unsigned cap; } Vec_826EE050;
extern void fn_826EC518(void *p, unsigned n);
extern void fn_826EDF20(Vec_826EE050 *v, int a, unsigned n);

void fn_826EE050(Vec_826EE050 *v, int a, unsigned n)
{
  unsigned m;
  if (n < v->size) {
    fn_826EC518(v->data + n * 0x28, v->size - n);
    if (n >= (v->cap >> 1)) goto done;
    m = n;
  } else {
    if (n < v->cap) goto done;
    m = (n >> 2) + n;
  }
  fn_826EDF20(v, a, m);
done:
  v->size = n;
}
