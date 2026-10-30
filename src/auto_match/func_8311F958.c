extern int fn_82F53208(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_824A78F0(void);
extern void fn_8313E6A0(void);
extern int atexit(void (*)(void));
extern int lbl_8329337C[];

void fn_8311F958(void)
{
  int x = fn_82F53208();
  lbl_8329337C[0] = x;
  lbl_8329337C[1] = (int)"NUIGestureSelectHandedness";
  fn_822B7998(x, "NUIGestureSelectHandedness", fn_824A78F0, 0x50);
  atexit(fn_8313E6A0);
}
