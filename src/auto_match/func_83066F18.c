typedef struct { int v[3]; } V3;
typedef struct { V3 a; V3 b; } Pair_83066F18;
Pair_83066F18 *fn_83066F18(Pair_83066F18 *p, const V3 *a, const V3 *b)
{
  p->a = *a;
  p->b = *b;
  return p;
}
