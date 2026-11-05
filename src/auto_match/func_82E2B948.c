typedef struct Msg { unsigned short type; unsigned short p2[3]; unsigned len; void *data; } Msg;
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);
extern Msg *fn_82E2AC98(void *, int);
extern void *memcpy(void *, const void *, unsigned);

int fn_82E2B948(char *self, int a, void *dst, unsigned cap, unsigned *outLen)
{
  int hr = 0;
  Msg *m;
  RtlEnterCriticalSection(self + 8);
  m = fn_82E2AC98(self, a);
  if (m != 0) {
    if (m->type == 0x1011) {
      if (outLen != 0)
        *outLen = m->len;
      if (m->len > cap) {
        hr = 0x8007007a;
      } else {
        memcpy(dst, m->data, m->len);
      }
    } else {
      hr = 0xc00d36bd;
    }
  } else {
    hr = 0xc00d36e6;
  }
  RtlLeaveCriticalSection(self + 8);
  return hr;
}
