extern void fn_82687270(void *);

void fn_82687EE0(void **a, unsigned n)
{
  void **p = a + n - 1;
  int i;
  if (n != 0) {
    i = n;
    do {
      if (*p != 0) fn_82687270(*p);
      i--;
      p--;
    } while (i != 0);
  }
}
