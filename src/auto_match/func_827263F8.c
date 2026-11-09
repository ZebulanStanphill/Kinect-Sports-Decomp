extern void fn_82725F50(char *p, int flags);

void fn_827263F8(char *base, unsigned n)
{
  char *p = base + n * 20 - 20;
  if (n != 0) {
    unsigned count = n;
    do {
      fn_82725F50(p, 0);
      p -= 20;
    } while (--count != 0);
  }
}
