typedef unsigned short wchar;
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);
extern short *fn_82E2AC98(void *, int);
extern unsigned fn_82F64CE0(const wchar *);
extern void *fn_82E4FE08(unsigned);
extern void *memcpy(void *, const void *, unsigned);

int fn_82E2B7F8(char *self, int key, void **out, unsigned *outlen)
{
  int hr = 0;
  short *e;
  RtlEnterCriticalSection(self + 8);
  e = fn_82E2AC98(self, key);
  if (e != 0) {
    if (*e == 0x1f) {
      unsigned n = fn_82F64CE0(*(const wchar **)(e + 4));
      void *buf = 0;
      unsigned sz = 0;
      if (n < 0x7ffffffe) {
        if (outlen != 0) *outlen = n;
        sz = (n + 1) * 2;
        buf = fn_82E4FE08(sz);
        *out = buf;
      }
      if (buf == 0) hr = 0x8007000e;
      else memcpy(buf, *(const wchar **)(e + 4), sz);
    } else {
      hr = 0xc00d36bd;
    }
  } else {
    hr = 0xc00d36e6;
  }
  RtlLeaveCriticalSection(self + 8);
  return hr;
}
