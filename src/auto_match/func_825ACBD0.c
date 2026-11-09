#define LD(x) (*(unsigned *)(x))
static __forceinline unsigned Get2(unsigned m)
{
  unsigned c, d = 0;
  if (m != 0 && (c = LD(m)) != 0)
    d = LD(c);
  return d;
}
unsigned fn_825ACBD0(unsigned *o)
{
  unsigned a=o[0], m=0, mp, t, i, c, d;
  t = o[4] + o[3];
  if (a && (c=LD(a))) m=LD(c);
  t--;
  d = Get2(m);
  if (d == 0) mp = 0; else mp = LD(d);
  i = t;
  if (LD(mp + 8) <= i)
    i -= LD(mp + 8);
  return LD(LD(mp + 4) + i * 4);
}
