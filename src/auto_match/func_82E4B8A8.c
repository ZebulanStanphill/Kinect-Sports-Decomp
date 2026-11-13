extern int fn_82D7E470(int, const char *, unsigned *);
extern int lbl_831882FC;

int fn_82E4B8A8(int a, unsigned *w, unsigned *h, int mode, int *p)
{
  int r1;
  int r2;
  unsigned v;
  if (p != 0 && p[0] != 0) {
    if (p[0x26] != 0 && p[0x27] != 0) {
      *w = p[10];
      *h = p[0xb];
      return 1;
    }
    return 0;
  }
  *h = 0;
  *w = 0;
  r1 = fn_82D7E470(lbl_831882FC, "Force Encoding Width", w);
  r2 = fn_82D7E470(lbl_831882FC, "Force Encoding Height", h);
  if (r1 != 0 && r2 != 0 && *w != 0 && *h != 0) {
    *w = (*w + 0xf) & 0xfffffff0;
    if (mode == 8) {
      *h = (*h + 0x1f) & 0xffffffe0;
    } else {
      *h = (*h + 0xf) & 0xfffffff0;
    }
    v = *w;
    if (v >= 0x10) {
      if (v > 0x2000) v = 0x2000;
    } else {
      v = 0x10;
    }
    *w = v;
    v = *h;
    if (v >= 0x20) {
      if (v > 0x2000) { *h = 0x2000; return 1; }
    } else {
      v = 0x20;
    }
    *h = v;
    return 1;
  }
  return 0;
}
