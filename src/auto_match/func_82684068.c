extern void fn_8267C4C8(void *p);
typedef struct { int a; void *b, *c, *d; } Quad;

Quad *fn_82684068(Quad *q, int a, void **b, void **c, void **d)
{
  q->a = a;
  if (*b != 0) fn_8267C4C8(*b);
  q->b = *b;
  if (*c != 0) fn_8267C4C8(*c);
  q->c = *c;
  if (*d != 0) fn_8267C4C8(*d);
  q->d = *d;
  return q;
}
