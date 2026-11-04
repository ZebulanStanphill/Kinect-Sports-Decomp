extern void fn_82670230(void *);

void fn_82676C88(void **a, unsigned n)
{
  void **p = a + n - 1;
  int i;
  if (n != 0) {
    i = n;
    do {
      if (*p != 0) fn_82670230(*p);
      i--;
      p--;
    } while (i != 0);
  }
}
