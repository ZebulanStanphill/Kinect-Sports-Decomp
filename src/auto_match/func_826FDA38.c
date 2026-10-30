typedef struct { char *data; unsigned size; unsigned cap; } Vec_826FDA38;
extern void fn_826FB1C8(void *p, unsigned n);
extern void fn_826FB378(Vec_826FDA38 *v, int a, unsigned n);

void fn_826FDA38(Vec_826FDA38 *v, int a, unsigned n)
{
  unsigned m;
  if (n < v->size) {
    fn_826FB1C8(v->data + (n << 3), v->size - n);
    if (n >= (v->cap >> 1)) goto done;
    m = n;
  } else {
    if (n < v->cap) goto done;
    m = (n >> 2) + n;
  }
  fn_826FB378(v, a, m);
done:
  v->size = n;
}
