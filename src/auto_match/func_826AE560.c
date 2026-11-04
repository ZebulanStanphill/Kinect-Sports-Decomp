extern void fn_826824B0(void *);

void fn_826AE560(void **a, unsigned n)
{
  void **p = a + n - 1;
  int i;
  if (n != 0) {
    i = n;
    do {
      if (*p != 0) fn_826824B0(*p);
      i--;
      p--;
    } while (i != 0);
  }
}
