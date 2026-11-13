extern "C" unsigned long _byteswap_ulong(unsigned long);
extern "C" unsigned __int64 _byteswap_uint64(unsigned __int64);
typedef unsigned __int64 u64;
struct Buf_82CE3628 {
  char *base; int pad; unsigned int size; unsigned int pos; int swap;
  long Write(const u64 * src, unsigned int n);
};
long Buf_82CE3628::Write(const u64 * src, unsigned int n)
{
  u64 *d;
  unsigned int i;
  if (size - pos < n * 8) return 0x8007007a;
  d = (u64 *)(base + pos);
  for (i = 0; i < n; i++) {
    *d++ = swap ? _byteswap_uint64(*src++) : *src++;
    pos += 8;
  }
  return 0;
}
