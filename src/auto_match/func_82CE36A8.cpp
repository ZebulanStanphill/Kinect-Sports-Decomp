extern "C" unsigned long _byteswap_ulong(unsigned long);
typedef unsigned int uint;
struct Buf_82CE3628 {
  char *base; int pad; uint size; uint pos; int swap;
  long Write(const uint *src, uint n);
};
long Buf_82CE3628::Write(const uint *src, uint n)
{
  uint *d;
  uint i;
  if (size - pos < n * 4) return 0x8007007a;
  d = (uint *)(base + pos);
  for (i = 0; i < n; i++) {
    *d++ = swap ? _byteswap_ulong(*src++) : *src++;
    pos += 4;
  }
  return 0;
}
