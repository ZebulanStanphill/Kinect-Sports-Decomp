extern char lbl_83219D50[];
extern void *fn_82A3FF60(void *tbl, unsigned int a, unsigned int b, unsigned int c);
extern void fn_82A49DF8(void *obj, unsigned int a, unsigned short b, unsigned short c, unsigned int d,
                        unsigned short e, unsigned short f, unsigned int g, unsigned short h);

void *fn_82A49FB8(unsigned int p1, unsigned short p2, unsigned short p3, unsigned int p4,
                  unsigned short p5, unsigned short p6, unsigned int p7, unsigned short p8)
{
  void *obj;

  if (p2 == 2) {
    p1 = 0x32;
  } else {
    if (p1 == 0) {
      p1 = 0x12;
    }
    if (p3 <= 2 && p7 == 0 && (p6 == 0 || p6 == p5) && (p2 != 1 || p5 <= 0x10)) {
    } else {
      p1 = 0x28;
    }
  }
  obj = fn_82A3FF60(lbl_83219D50, p1, 0x20970006, 0);
  if (obj != 0) {
    fn_82A49DF8(obj, p1, p2, p3, p4, p5, p6, p7, p8);
  }
  return obj;
}
