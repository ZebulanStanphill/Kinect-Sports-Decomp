extern void *fn_82E21DB0(unsigned int, int);
extern void fn_82F622A8(const char *);
int fn_82424AD0(int *p, unsigned int n)
{
  int *q;
  p[0] = 0; p[1] = 0; p[2] = 0;
  if (n == 0) return 0;
  if (n > 0x3fffffff) fn_82F622A8("vector<T> too long");
  q = (int *)fn_82E21DB0(n, 0);
  p[0] = (int)q; p[1] = (int)q; p[2] = (int)(q + n);
  return 1;
}
