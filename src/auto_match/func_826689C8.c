typedef struct { unsigned v; } It_826689C8;
extern It_826689C8 *fn_8265E0E0(It_826689C8 *, int);
It_826689C8 *fn_826689C8(It_826689C8 *self, It_826689C8 *other, int n)
{
  It_826689C8 tmp = *other;
  *self = *fn_8265E0E0(&tmp, n);
  return self;
}
