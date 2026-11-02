extern void fn_827155B8(void *p);

void fn_82715CF8(char *p, unsigned int n)
{
  unsigned int i;
  for (i = 0; i < n; i++) {
    if (p != 0) {
      fn_827155B8(p);
    }
    p += 0x4c;
  }
}
