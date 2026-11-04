extern void fn_8267C498(void *);

void fn_826DF960(void **a, unsigned n)
{
  void **p = a + n - 1;
  int i;
  if (n != 0) {
    i = n;
    do {
      if (*p != 0) fn_8267C498(*p);
      i--;
      p--;
    } while (i != 0);
  }
}
