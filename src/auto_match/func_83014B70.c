extern unsigned fn_82FA5060(unsigned, int);
extern unsigned fn_83014568(unsigned, int, int);
extern void fn_83015E68(int, unsigned);
extern unsigned lbl_831BC768;
extern int lbl_832642E0;

unsigned fn_83014B70(int a, int b)
{
  unsigned h = fn_82FA5060(lbl_831BC768, 0x80);
  unsigned o;
  if (h != 0) {
    o = fn_83014568(h, a, b);
    if (o != 0) fn_83015E68(lbl_832642E0 + 0x1304, o);
  } else {
    o = 0;
  }
  return o;
}
