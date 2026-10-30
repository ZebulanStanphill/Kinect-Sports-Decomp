typedef struct { char *data; unsigned size; unsigned cap; } Vec_82795AE8;
extern void fn_82795A90(void *p, unsigned n);
extern void fn_82768EA0(Vec_82795AE8 *v, int a, unsigned n);

void fn_82795AE8(Vec_82795AE8 *v, int a, unsigned n)
{
  unsigned m;
  if (n < v->size) {
    fn_82795A90(v->data + (n << 2), v->size - n);
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
