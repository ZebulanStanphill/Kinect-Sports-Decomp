typedef struct { int v[3]; } V3;
typedef struct { V3 a; V3 b; } Pair_8281EE38;
Pair_8281EE38 *fn_8281EE38(Pair_8281EE38 *p, const V3 *a, const V3 *b)
{
  p->a = *a;
  p->b = *b;
  return p;
}
