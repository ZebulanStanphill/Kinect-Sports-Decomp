extern int fn_82F53208(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_824A3600(void);
extern void fn_8313E580(void);
extern int atexit(void (*)(void));
extern int lbl_83292EB8[];

void fn_8311F080(void)
{
  int x = fn_82F53208();
  lbl_83292EB8[0] = x;
  lbl_83292EB8[1] = (int)"NUIGestureBasketballJump";
  fn_822B7998(x, "NUIGestureBasketballJump", fn_824A3600, 0x50);
  atexit(fn_8313E580);
}
