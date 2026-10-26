int fn_82ADD498(unsigned __int64 *a, unsigned __int64 *b, int n)
{
  unsigned __int64 *end = a + n;
  for (; a < end; ++a, ++b) {
    if (*b & *a)
      return 1;
  }
  return 0;
}
