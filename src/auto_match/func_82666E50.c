typedef struct { unsigned v; } It_82666E50;
extern It_82666E50 *fn_82666FE0(It_82666E50 *, int);
It_82666E50 *fn_82666E50(It_82666E50 *self, It_82666E50 *other, int n)
{
  It_82666E50 tmp = *other;
  *self = *fn_82666FE0(&tmp, n);
  return self;
}
