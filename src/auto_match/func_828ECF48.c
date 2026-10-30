extern void *memcpy(void *, const void *, unsigned int);
extern void fn_828EC900(void *);

void fn_828ECF48(char *p, unsigned int a, void *src, unsigned char b, unsigned char c)
{
  *(unsigned int *)(p + 0x1e4) = a;
  p[0x1e1] = 1;
  p[0x1e2] = 0;
  *(unsigned int *)(p + 0x224) = 2;
  memcpy(p + 0x200, src, 0x24);
  p[0x228] = b;
  *(unsigned int *)(p + 0x150) = 0x10;
  *(unsigned int *)(p + 0x154) = 0;
  p[0x229] = c;
  fn_828EC900(p);
}
