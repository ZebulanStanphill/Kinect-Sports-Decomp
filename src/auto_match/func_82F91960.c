typedef struct { void *cont; void *ptr; } It_82F91960;
extern It_82F91960 *fn_82F92140(It_82F91960 *);
It_82F91960 *fn_82F91960(It_82F91960 *self, It_82F91960 *it, int n)
{
  It_82F91960 tmp = *it;
  fn_82F92140(it);
  *self = tmp;
  return self;
}
