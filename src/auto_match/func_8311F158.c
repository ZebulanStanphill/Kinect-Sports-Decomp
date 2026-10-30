extern int fn_82F53208(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_824A4A60(void);
extern void fn_8313E598(void);
extern int atexit(void (*)(void));
extern int lbl_83292F80[];

void fn_8311F158(void)
{
  int x = fn_82F53208();
  lbl_83292F80[0] = x;
  lbl_83292F80[1] = (int)"NUIGestureBasketballShot";
  fn_822B7998(x, "NUIGestureBasketballShot", fn_824A4A60, 0x4c);
  atexit(fn_8313E598);
}
