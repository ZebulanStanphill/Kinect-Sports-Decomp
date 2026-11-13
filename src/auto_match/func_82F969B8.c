typedef struct { void *cont; void *ptr; } It_82F969B8;
extern It_82F969B8 *fn_82F95CE8(It_82F969B8 *);
It_82F969B8 *fn_82F969B8(It_82F969B8 *self, It_82F969B8 *it, int n)
{
  It_82F969B8 tmp = *it;
  fn_82F95CE8(it);
  *self = tmp;
  return self;
}
