extern int fn_82F53208(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_824A8EA0(void);
extern void fn_8313E6E8(void);
extern int atexit(void (*)(void));
extern int lbl_83293458[];

void fn_8311FBE0(void)
{
  int x = fn_82F53208();
  lbl_83293458[0] = x;
  lbl_83293458[1] = (int)"NUIGestureTPose";
  fn_822B7998(x, "NUIGestureTPose", fn_824A8EA0, 0x54);
  atexit(fn_8313E6E8);
}
