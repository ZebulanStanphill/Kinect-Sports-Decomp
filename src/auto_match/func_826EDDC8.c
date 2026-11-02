extern void fn_826EC280(void *p);

void fn_826EDDC8(char *p, unsigned int n)
{
  unsigned int i;
  for (i = 0; i < n; i++) {
    if (p != 0) {
      fn_826EC280(p);
    }
    p += 0x58;
  }
}
