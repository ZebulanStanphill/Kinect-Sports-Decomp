typedef struct { char *data; unsigned size; unsigned cap; } Vec_82758858;
extern void fn_826EB708(void *p, unsigned n);
extern void fn_82758728(Vec_82758858 *v, int a, unsigned n);

void fn_82758858(Vec_82758858 *v, int a, unsigned n)
{
  unsigned m;
  if (n < v->size) {
    fn_826EB708(v->data + n * 0x28, v->size - n);
    if (n >= (v->cap >> 1)) goto done;
    m = n;
  } else {
    if (n < v->cap) goto done;
    m = (n >> 2) + n;
  }
  fn_82758728(v, a, m);
done:
  v->size = n;
}
