extern int fn_8267B890(int, unsigned, int *);
extern int fn_8267BDA8(unsigned, unsigned);
extern void fn_8267BE38(unsigned);
extern int lbl_831E7E64;

void fn_8273CE60(unsigned *p, int unused, unsigned n)
{
  unsigned old = *p;
  unsigned cap;
  int fl[2];
  if (n == 0) {
    if (old != 0) {
      fn_8267BE38(old);
      *p = 0;
    }
    p[2] = 0;
    return;
  }
  cap = (n + 3) & ~3u;
  if (old != 0) {
    *p = fn_8267BDA8(old, cap << 2);
  } else {
    fl[0] = 2;
    *p = fn_8267B890(lbl_831E7E64, cap << 2, fl);
  }
  p[2] = cap;
}
