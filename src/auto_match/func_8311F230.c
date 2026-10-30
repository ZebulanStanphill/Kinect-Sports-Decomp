extern int fn_82F53208(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_824A4C60(void);
extern void fn_8313E5B0(void);
extern int atexit(void (*)(void));
extern int lbl_83292F88[];

void fn_8311F230(void)
{
  int x = fn_82F53208();
  lbl_83292F88[0] = x;
  lbl_83292F88[1] = (int)"NUIGestureBasketballSlamDunk";
  fn_822B7998(x, "NUIGestureBasketballSlamDunk", fn_824A4C60, 0x50);
  atexit(fn_8313E5B0);
}
