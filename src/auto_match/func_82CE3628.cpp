extern "C" unsigned long _byteswap_ulong(unsigned long);
extern "C" unsigned short _byteswap_ushort(unsigned short);
typedef unsigned int uint;
typedef unsigned __int64 u64;
struct Buf_82CE3628 {
  char *base; int pad; uint size; uint pos; int swap;
  long Write(const unsigned short * src, uint n);
};
long Buf_82CE3628::Write(const unsigned short * src, uint n)
{
  unsigned short *d;
  uint i;
  if (size - pos < n * 2) return 0x8007007a;
  d = (unsigned short *)(base + pos);
  for (i = 0; i < n; i++) {
    *d++ = swap ? _byteswap_ushort(*src++) : *src++;
    pos += 2;
  }
  return 0;
}
