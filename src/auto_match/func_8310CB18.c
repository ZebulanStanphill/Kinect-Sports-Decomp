extern int fn_8235A170(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_822B02A0(void);
extern void fn_8313BBF8(void);
extern int atexit(void (*)(void));
extern int lbl_83284E78[];

void fn_8310CB18(void)
{
  int x = fn_8235A170();
  lbl_83284E78[0] = x;
  lbl_83284E78[1] = (int)"TableTennisTacticsStateMan";
  fn_822B7998(x, "TableTennisTacticsStateMan", fn_822B02A0, 0x2c);
  atexit(fn_8313BBF8);
}
