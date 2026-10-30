extern unsigned __int64 fn_829D6C98(void *p);
extern void fn_829D47B0(unsigned *out, unsigned n);
extern int fn_82A2B218(unsigned __int64 h, unsigned __int64 *a, int b, unsigned *c, int d);
extern unsigned XamReadBiometricData(unsigned __int64 h, unsigned *buf, unsigned data, unsigned *size, int x);
extern void fn_82A2B288(unsigned __int64 h, unsigned __int64 a, unsigned data, unsigned size, int b);
extern void fn_82A28E60(int a, int b, unsigned c);
extern char *lbl_832179FC;

static __inline unsigned Alloc_829D8DE8(unsigned n)
{
  unsigned out;
  fn_829D47B0(&out, n);
  return out;
}

void fn_829D8DE8(void)
{
  unsigned __int64 h;
  unsigned data;
  void *p;

  p = lbl_832179FC + 0x8f4e0;
  *(int *)((char *)p + 0x20) = 0;
  h = fn_829D6C98(p);
  data = Alloc_829D8DE8(0x32000);
  if (data != 0) {
    unsigned __int64 v;
      unsigned size, buf, x;

    while (h != 0) {
      v = 0;
      size = 0;
      x = 0;
      buf = 0;
      if (fn_82A2B218(h, &v, 0, &x, 0) < 0 || v == 0) {
        size = 0x32000;
        if (XamReadBiometricData(h, &buf, data, &size, 0) != 0 || buf == 0) {
          buf = 0x80000000;
          size = 1;
        }
        fn_82A2B288(h, buf, data, size, 0);
      }
      h = fn_829D6C98(p);
    }
    fn_82A28E60(*(int *)(lbl_832179FC + 0x8f4cc), 0, data);
  }
}
