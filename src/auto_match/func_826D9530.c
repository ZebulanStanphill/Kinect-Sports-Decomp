extern int fn_826D88B0(int, int);

typedef struct Pair_826D9530 { int a; int b; } Pair_826D9530;

Pair_826D9530 * fn_826D9530(Pair_826D9530 *p, int a, int b)
{
  int n = fn_826D88B0(a, b);
  if (n >= 0) { p->a = a; p->b = n; return p; }
  n = 0;
  p->a = n;
  p->b = n;
  return p;
}
