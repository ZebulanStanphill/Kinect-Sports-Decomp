extern void XMemSet(void *dst, int value, unsigned int size);
extern void fn_822C8920(void *p);
extern unsigned char lbl_83276544[8];

void fn_8233C2C8(void *p)
{
  XMemSet(lbl_83276544, 0, 8);
  fn_822C8920(p);
}
