typedef struct Entry_82E2B9F8 {
  unsigned short type;
  short pad2[3];
  unsigned size;
  void *src;
} Entry_82E2B9F8;
extern Entry_82E2B9F8 *fn_82E2AC98(void *, int);
extern void *fn_82E4FE08(unsigned);
extern void *memcpy(void *, const void *, unsigned);
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);

int fn_82E2B9F8(char *self, int key, void **out, unsigned *outSize)
{
  Entry_82E2B9F8 *e;
  void *buf;
  int hr = 0;
  RtlEnterCriticalSection(self + 8);
  e = fn_82E2AC98(self, key);
  if (e != 0) {
    if (e->type == 0x1011) {
      if (outSize != 0) {
        *outSize = e->size;
      }
      buf = fn_82E4FE08(e->size);
      *out = buf;
      if (buf == 0) {
        hr = 0x8007000E;
      } else {
        memcpy(buf, e->src, e->size);
      }
    } else {
      hr = 0xC00D36BD;
    }
  } else {
    hr = 0xC00D36E6;
  }
  RtlLeaveCriticalSection(self + 8);
  return hr;
}
