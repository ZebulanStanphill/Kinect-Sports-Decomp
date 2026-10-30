extern int fn_82F53208(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_824A5CA8(void);
extern void fn_8313E628(void);
extern int atexit(void (*)(void));
extern int lbl_8329320C[];

void fn_8311F650(void)
{
  int x = fn_82F53208();
  lbl_8329320C[0] = x;
  lbl_8329320C[1] = (int)"NUIGestureRaiseHand";
  fn_822B7998(x, "NUIGestureRaiseHand", fn_824A5CA8, 0x64);
  atexit(fn_8313E628);
}
