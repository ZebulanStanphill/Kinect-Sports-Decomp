extern "C" unsigned long _byteswap_ulong(unsigned long);
extern "C" unsigned __int64 _byteswap_uint64(unsigned __int64);
typedef unsigned int uint;
typedef unsigned __int64 u64;
struct Buf_82CE3628 {
  char *base; int pad; uint size; uint pos; int swap;
  long Write(const u64 * src, uint n);
};
long Buf_82CE3628::Write(const u64 * src, uint n)
{
  u64 *d;
  uint i;
  if (size - pos < n * 8) return 0x8007007a;
  d = (u64 *)(base + pos);
  for (i = 0; i < n; i++) {
    *d++ = swap ? _byteswap_uint64(*src++) : *src++;
    pos += 8;
  }
  return 0;
}
