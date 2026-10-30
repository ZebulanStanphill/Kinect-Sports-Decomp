typedef struct { char *data; unsigned size; unsigned cap; } Vec_826EE0D0;
extern void fn_826EDEC8(void *p, unsigned n);
extern void fn_826EDFB8(Vec_826EE0D0 *v, int a, unsigned n);

void fn_826EE0D0(Vec_826EE0D0 *v, int a, unsigned n)
{
  unsigned m;
  if (n < v->size) {
    fn_826EDEC8(v->data + n * 0x58, v->size - n);
    if (n >= (v->cap >> 1)) goto done;
    m = n;
  } else {
    if (n < v->cap) goto done;
    m = (n >> 2) + n;
  }
  fn_826EDFB8(v, a, m);
done:
  v->size = n;
}
