extern void fn_8268CC00(void *p);

void fn_826EB7F8(char *p, unsigned int n)
{
  unsigned int i;
  for (i = 0; i < n; i++) {
    if (p != 0) {
      fn_8268CC00(p);
    }
    p += 0x18;
  }
}
