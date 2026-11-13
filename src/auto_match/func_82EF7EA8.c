extern int fn_82EF75C0(int, int, int, int);
int fn_82EF7EA8(int a, int n, int b, int m, int k)
{
  int r;
  r = fn_82EF75C0(a, n, b, m);
  r += fn_82EF75C0(a + 8, n, b + 8, m);
  if (k > 8) {
    a = a + n * 8;
    b = b + m * 8;
    r += fn_82EF75C0(a + 8, n, b + 8, m);
    r += fn_82EF75C0(a, n, b, m);
  }
  return r;
}
