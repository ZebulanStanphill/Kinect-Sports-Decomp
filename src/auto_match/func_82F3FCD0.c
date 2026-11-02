extern void fn_82E4FE40(void *);
extern void *fn_82E50BE8(unsigned, int, int, int, int);
extern int fn_82A3F758(void *, unsigned, const unsigned short *);

static int Length(const unsigned short *p, unsigned *out)
{
  int hr = 0;
  unsigned n = 0x7fffffff;
  while (n != 0 && *p != 0) {
    p++;
    n--;
  }
  if (n == 0) {
    hr = 0x80070057;
  } else {
    *out = 0x7fffffff - n;
  }
  return hr;
}

int fn_82F3FCD0(char *o, const unsigned short *s)
{
  unsigned len = 0;
  void *buf;
  int hr;
  if (*(void **)(o + 0x50) != 0) {
    fn_82E4FE40(*(void **)(o + 0x50));
  }
  *(void **)(o + 0x50) = 0;
  if (s != 0) {
    hr = Length(s, &len);
    if (hr < 0) return hr;
    len++;
    buf = fn_82E50BE8(len <= 0x7fffffff ? len * 2 : 0xffffffff, 0, 0, 0, 0);
    *(void **)(o + 0x50) = buf;
    if (buf == 0) return 0x8007000e;
    if (len > 0x7fffffff) return 0x80070057;
    hr = fn_82A3F758(buf, len, s);
    if (hr < 0) return hr;
  }
  *(short *)(o + 0x60) = (short)len;
  return 0;
}
