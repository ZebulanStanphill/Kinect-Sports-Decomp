typedef struct { char *data; unsigned size; unsigned cap; } Vec_82772B00;
extern void fn_82772920(void *p, unsigned n);
extern void fn_82772A68(Vec_82772B00 *v, int a, unsigned n);

void fn_82772B00(Vec_82772B00 *v, int a, unsigned n)
{
  unsigned m;
  if (n < v->size) {
    fn_82772920(v->data + n * 0x24, v->size - n);
    if (n >= (v->cap >> 1)) goto done;
    m = n;
  } else {
    if (n < v->cap) goto done;
    m = (n >> 2) + n;
  }
  fn_82772A68(v, a, m);
done:
  v->size = n;
}
