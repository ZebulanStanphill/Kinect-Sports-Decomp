typedef struct { char *data; unsigned size; unsigned cap; } Vec_82689BE0;
extern void fn_82689AE8(char *p, unsigned n);
extern void fn_82689B48(Vec_82689BE0 *v, int a, unsigned n);

void fn_82689BE0(Vec_82689BE0 *v, int a, unsigned n)
{
  unsigned m;
  if (n < v->size) {
    fn_82689AE8(v->data + n * 4, v->size - n);
    if (n >= v->cap >> 1) { v->size = n; return; }
    m = n;
  } else {
    if (n < v->cap) { v->size = n; return; }
    m = n + (n >> 2);
  }
  fn_82689B48(v, a, m);
  v->size = n;
}
