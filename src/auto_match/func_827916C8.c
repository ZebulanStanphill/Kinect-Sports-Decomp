struct P_827916C8 { int first; int second; };
extern unsigned fn_82790358(int *, int, unsigned, struct P_827916C8 *, void *);
extern int fn_82790270(int, int, int);
extern void fn_82790E00(void);
int *fn_827916C8(int a, int b, int *items, unsigned n)
{
  struct P_827916C8 pr;
  unsigned i;
  int *base = items;
  int *e;
  pr.first = a;
  pr.second = b;
  i = fn_82790358((int *)&items, 0, n, &pr, fn_82790E00);
  if (i < n) {
    e = base + i * 3;
    if (-fn_82790270(pr.first, *e, pr.second) == 0) return e;
  }
  return 0;
}
