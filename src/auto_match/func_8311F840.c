extern int fn_82F53208(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_824A6910(void);
extern void fn_8313E670(void);
extern int atexit(void (*)(void));
extern int lbl_83293298[];

void fn_8311F840(void)
{
  int x = fn_82F53208();
  lbl_83293298[0] = x;
  lbl_83293298[1] = (int)"NUIGestureRunningWithArms";
  fn_822B7998(x, "NUIGestureRunningWithArms", fn_824A6910, 0x4c);
  atexit(fn_8313E670);
}
