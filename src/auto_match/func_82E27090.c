typedef struct Hdr_82E27090 {
  unsigned f0;
  char pad[0xa];
  unsigned short w;
  unsigned f10;
  char pad2[0xc];
  unsigned f20;
} Hdr_82E27090;

int fn_82E27090(Hdr_82E27090 *p, unsigned n)
{
  int len;
  unsigned sz;
  unsigned u;
  int hr;

  hr = 0;
  len = 0x28;
  if (n >= 0x28 && (sz = p->f0, sz >= 0x28) && sz <= 0x4000) {
    if ((p->w <= 8 && p->f10 == 0) || p->f20 != 0) {
      u = p->f20;
      if (u == 0) {
        u = 1 << p->w;
      }
      if (u > 0x100) {
        return 0xc00d36b4;
      }
      len = (u + 10) * 4;
    }
    if (p->f10 == 3) {
      len = len + 0xc;
    }
    if (n < (sz + len) - 0x28) {
      hr = 0xc00d36b4;
    }
  } else {
    hr = 0xc00d36b4;
  }
  return hr;
}
