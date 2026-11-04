extern void fn_82761DE8(void *);

void fn_82768D80(void **a, unsigned n)
{
  void **p = a + n - 1;
  int i;
  if (n != 0) {
    i = n;
    do {
      if (*p != 0) fn_82761DE8(*p);
      i--;
      p--;
    } while (i != 0);
  }
}
