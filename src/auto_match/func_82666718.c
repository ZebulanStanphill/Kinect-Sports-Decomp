typedef struct { unsigned v; } It_82666718;
extern It_82666718 *fn_82666E30(It_82666718 *);
It_82666718 *fn_82666718(It_82666718 *self, It_82666718 *it, int n)
{
  It_82666718 tmp = *it;
  fn_82666E30(it);
  *self = tmp;
  return self;
}
