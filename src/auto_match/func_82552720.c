typedef struct {
  unsigned a, b, c;
} Vec_func_82552720;

extern int fn_82552788(void *, void *, void *, void *, int, void *, void *, Vec_func_82552720 *, Vec_func_82552720 *);
extern void fn_822CD140(Vec_func_82552720 *);
extern void fn_822C18B8(Vec_func_82552720 *);

int fn_82552720(void *a, void *b, void *c, void *d, int e, void *f, void *g)
{
  Vec_func_82552720 x, y;
  int r;
  y.a = 0;
  y.b = 0;
  y.c = 0;
  x.a = 0;
  x.b = 0;
  x.c = 0;
  r = fn_82552788(a, b, c, d, e, f, g, &x, &y);
  fn_822CD140(&x);
  fn_822C18B8(&y);
  return r;
}
