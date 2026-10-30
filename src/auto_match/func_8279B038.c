typedef struct { char *data; unsigned size; unsigned cap; } Vec_8279B038;
extern void fn_82725EF0(void *p, unsigned n);
extern void fn_8279ACB8(Vec_8279B038 *v, int a, unsigned n);

void fn_8279B038(Vec_8279B038 *v, int a, unsigned n)
{
  unsigned m;
  if (n < v->size) {
    fn_82725EF0(v->data + n * 0x30, v->size - n);
    if (n >= (v->cap >> 1)) goto done;
    m = n;
  } else {
    if (n < v->cap) goto done;
    m = (n >> 2) + n;
  }
  fn_8279ACB8(v, a, m);
done:
  v->size = n;
}
