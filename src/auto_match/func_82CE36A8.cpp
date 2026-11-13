extern "C" unsigned long _byteswap_ulong(unsigned long);
struct Buf_82CE3628 {
  char *base; int pad; unsigned int size; unsigned int pos; int swap;
  long Write(const unsigned int *src, unsigned int n);
};
long Buf_82CE3628::Write(const unsigned int *src, unsigned int n)
{
  unsigned int *d;
  unsigned int i;
  if (size - pos < n * 4) return 0x8007007a;
  d = (unsigned int *)(base + pos);
  for (i = 0; i < n; i++) {
    *d++ = swap ? _byteswap_ulong(*src++) : *src++;
    pos += 4;
  }
  return 0;
}
