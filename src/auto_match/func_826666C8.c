typedef struct { unsigned v; } It_826666C8;
extern It_826666C8 *fn_8265D3D0(It_826666C8 *);
It_826666C8 *fn_826666C8(It_826666C8 *self, It_826666C8 *it, int n)
{
  It_826666C8 tmp = *it;
  fn_8265D3D0(it);
  *self = tmp;
  return self;
}
