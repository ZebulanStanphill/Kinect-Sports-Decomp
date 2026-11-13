extern int fn_82EE5E28();
extern int fn_82EE5F60();

unsigned int fn_82E76AB0(char *self, unsigned short *a, unsigned short *b, unsigned int *outn, unsigned *outf)
{
  unsigned int hr;
  unsigned int n;
  unsigned next;
  unsigned char c;
  unsigned char cnt;
  if (a == 0 || b == 0 || outn == 0 || outf == 0) {
    return 0x80070057;
  }
  *outn = 0;
  *outf = 0;
  if ((*(unsigned char *)(self + 0x238) & 2) == 0) {
    return 0xc00d3a98;
  }
  if (*(unsigned *)(self + 0x230) < 1) {
    *outn = *(unsigned *)(self + 0x230);
    return 0x400d3a98;
  }
  c = 0;
  hr = fn_82EE5F60(self + 0x218, &c, 1);
  if ((int)hr < 0) return hr;
  next = c + 1;
  *b = *a;
  *(unsigned *)((char *)b + 2) = *(unsigned *)((char *)a + 2);
  *(char *)((char *)b + 6) = *((char *)a + 6) + 1;
  *(unsigned *)((char *)b + 0xb) = c;
  *(unsigned *)((char *)b + 7) = 0;
  *(unsigned *)((char *)b + 0xf) = *(unsigned *)((char *)a + 0xf) + *(unsigned char *)((char *)a + 0x13c);
  {
    unsigned i2 = *(unsigned *)((char *)a + 0x17);
    unsigned i3 = *(unsigned *)((char *)a + 0x13);
    *(unsigned *)((char *)b + 0x13) = i2 + i3;
    *(unsigned *)((char *)b + 0x1b) = c;
    *(unsigned *)((char *)b + 0x17) = next;
    *(unsigned short *)((char *)b + 0x1f) = 0;
  }
  *(unsigned *)((char *)b + 0x21) = 0;
  *(unsigned *)((char *)b + 0x12c) = 1;
  *((char *)b + 0x130) = *((char *)a + 0x130) + 1;
  *(unsigned *)((char *)b + 0x134) = *(unsigned *)((char *)a + 0x134);
  *(unsigned *)((char *)b + 0x138) = *(unsigned *)((char *)a + 0x138) + next;
  *((char *)b + 0x13c) = *((char *)a + 0x13c);
  *outf = 1;
  n = *(unsigned *)((char *)b + 0x17);
  if (n > *(unsigned *)(self + 0x230)) n = *(unsigned *)(self + 0x230);
  hr = fn_82EE5E28(self + 0x218, n);
  if ((int)hr < 0) return hr;
  if (n < *(unsigned *)((char *)b + 0x17)) hr = 0x400d3a98;
  *outn = n;
  *(short *)(self + 0x146) = *(short *)(self + 0x146) + 1;
  return hr;
}
