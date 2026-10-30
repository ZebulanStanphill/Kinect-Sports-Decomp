extern int fn_82F53208(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_824A2B40(void);
extern void fn_8313E568(void);
extern int atexit(void (*)(void));
extern int lbl_83292EB0[];

void fn_8311EFA8(void)
{
  int x = fn_82F53208();
  lbl_83292EB0[0] = x;
  lbl_83292EB0[1] = (int)"NUIGestureBasketballHandSwap";
  fn_822B7998(x, "NUIGestureBasketballHandSwap", fn_824A2B40, 0x60);
  atexit(fn_8313E568);
}
