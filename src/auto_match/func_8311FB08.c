extern int fn_82F53208(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_824A8AA8(void);
extern void fn_8313E6D0(void);
extern int atexit(void (*)(void));
extern int lbl_83293450[];

void fn_8311FB08(void)
{
  int x = fn_82F53208();
  lbl_83293450[0] = x;
  lbl_83293450[1] = (int)"NUIGestureTakeStep";
  fn_822B7998(x, "NUIGestureTakeStep", fn_824A8AA8, 0x5c);
  atexit(fn_8313E6D0);
}
