extern int fn_826D89A8(int, int);

typedef struct Pair_826D9590 { int a; int b; } Pair_826D9590;

Pair_826D9590 * fn_826D9590(Pair_826D9590 *p, int a, int b)
{
  int n = fn_826D89A8(a, b);
  if (n >= 0) { p->a = a; p->b = n; return p; }
  n = 0;
  p->a = n;
  p->b = n;
  return p;
}
