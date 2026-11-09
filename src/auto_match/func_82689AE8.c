extern void fn_826F8490(void *, int);

void fn_82689AE8(void **a, unsigned n)
{
  void **p = a + n - 1;
  int i;
  if (n != 0) {
    i = n;
    do {
      fn_826F8490(p, 0);
      i--;
      p--;
    } while (i != 0);
  }
}
