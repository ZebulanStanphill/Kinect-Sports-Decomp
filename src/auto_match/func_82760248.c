extern void fn_82759550(void *p);

void fn_82760248(char *p, unsigned int n)
{
  unsigned int i;
  for (i = 0; i < n; i++) {
    if (p != 0) {
      fn_82759550(p);
    }
    p += 0x18;
  }
}
