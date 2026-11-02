extern void fn_827934A8(void *p);

void fn_82794A70(char *p, unsigned int n)
{
  unsigned int i;
  for (i = 0; i < n; i++) {
    if (p != 0) {
      fn_827934A8(p);
    }
    p += 0x54;
  }
}
