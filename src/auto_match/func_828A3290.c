#define LD(x) (*(unsigned *)(x))
__declspec(noreturn) void fn_82F622E0(const char *);
static unsigned Get1(unsigned *o)
{
  unsigned a = o[0], c, m = 0;
  if (a != 0 && (c = LD(a)) != 0)
    m = LD(c);
  return m;
}
static unsigned Get2(unsigned m)
{
  unsigned c, d = 0;
  if (m != 0 && (c = LD(m)) != 0)
    d = LD(c);
  return d;
}
unsigned fn_828A3290(unsigned *o, unsigned n)
{
  unsigned m, mp, t, i, lo, d;
  if (o[4] <= n) fn_82F622E0("invalid deque<T> subscript");
  t = o[3];
  m = Get1(o);
  t += n;
  d = Get2(m);
  if (d == 0) mp = 0; else mp = LD(d);
  i = t >> 2;
  lo = t & 3;
  if (LD(mp + 8) <= i)
    i -= LD(mp + 8);
  return LD(LD(mp + 4) + i * 4) + lo * 4;
}
