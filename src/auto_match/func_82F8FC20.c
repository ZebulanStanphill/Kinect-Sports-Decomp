typedef struct { void *node; void *cont; } It_82F8FC20;
extern It_82F8FC20 *fn_82F8FCA0(It_82F8FC20 *, int);
It_82F8FC20 *fn_82F8FC20(It_82F8FC20 *self, It_82F8FC20 *other, int n)
{
  It_82F8FC20 tmp = *other;
  *self = *fn_82F8FCA0(&tmp, n);
  return self;
}
