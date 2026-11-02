extern void fn_827597E0(void *p);

void fn_827601F0(char *p, unsigned int n)
{
  unsigned int i;
  for (i = 0; i < n; i++) {
    if (p != 0) {
      fn_827597E0(p);
    }
    p += 0x28;
  }
}
