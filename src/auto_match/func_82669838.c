typedef struct { unsigned v; } It_82669838;
extern It_82669838 *fn_82669B50(It_82669838 *, int);
It_82669838 *fn_82669838(It_82669838 *self, It_82669838 *other, int n)
{
  It_82669838 tmp = *other;
  *self = *fn_82669B50(&tmp, n);
  return self;
}
