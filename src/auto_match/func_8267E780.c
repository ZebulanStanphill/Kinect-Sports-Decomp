extern int fn_8267B890(int, unsigned, int *);
extern int fn_8267BDA8(unsigned, unsigned);
extern void fn_8267BE38(unsigned);
extern int lbl_831E7E64;

void fn_8267E780(unsigned *p, int unused, unsigned n)
{
  unsigned old;
  unsigned cap;
  int fl[2];
  if (n >= p[2]) {
    old = *p;
    if (n == 0) {
      cap = 0;
      if (old != 0) {
        fn_8267BE38(old);
        *p = 0;
      }
    } else {
      cap = (n + 15) & ~15u;
      if (old != 0) {
        *p = fn_8267BDA8(old, cap << 3);
      } else {
        fl[0] = 2;
        *p = fn_8267B890(lbl_831E7E64, cap << 3, fl);
      }
    }
    p[2] = cap;
  }
}
