typedef struct { unsigned v; } It_826697B8;
extern It_826697B8 *fn_82669B20(It_826697B8 *);
It_826697B8 *fn_826697B8(It_826697B8 *self, It_826697B8 *it, int n)
{
  It_826697B8 tmp = *it;
  fn_82669B20(it);
  *self = tmp;
  return self;
}
