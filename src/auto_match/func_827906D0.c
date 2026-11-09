extern void fn_8278FE78(char *p, int flags);

void fn_827906D0(char *base, unsigned n)
{
  char *p = base + n * 12 - 12;
  if (n != 0) {
    unsigned count = n;
    do {
      fn_8278FE78(p, 0);
      p -= 12;
    } while (--count != 0);
  }
}
