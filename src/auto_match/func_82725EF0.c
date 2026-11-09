extern void fn_827245E8(char *p, int flags);

void fn_82725EF0(char *base, unsigned n)
{
  char *p = base + n * 48 - 48;
  if (n != 0) {
    unsigned count = n;
    do {
      fn_827245E8(p, 0);
      p -= 48;
    } while (--count != 0);
  }
}
