extern void fn_826EC330(char *p, int flags);

void fn_826EC518(char *base, unsigned n)
{
  char *p = base + n * 40 - 40;
  if (n != 0) {
    unsigned count = n;
    do {
      fn_826EC330(p, 0);
      p -= 40;
    } while (--count != 0);
  }
}
