extern "C" {
extern int fn_82F490A0(unsigned short *s);
extern unsigned int fn_82A2A378(int cp, int flags, unsigned short *ws, int n, char *buf, int size, int a, int b);
extern void fn_82F48F80(void *p, char *s, int c);
extern unsigned short lbl_8326181C;
}

extern "C" void fn_82F49100(void *p, unsigned short *name, int c)
{
  char buf[5] = {};
  char *s;
  int r;

  s = 0;
  if (name != 0) {
    r = fn_82F490A0(name);
    if (r < 0) {
      return;
    }
    if (r == 0) {
      name = name + lbl_8326181C;
      if (fn_82A2A378(r, 0, name, -1, 0, 0, 0, 0) <= 5) {
        fn_82A2A378(0, 0, name, -1, buf, 5, 0, 0);
        s = buf;
      }
    } else if (p == 0) {
      return;
    }
  }
  fn_82F48F80(p, s, c);
}
