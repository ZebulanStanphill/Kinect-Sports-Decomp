extern int fn_82F53208(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_824ACF80(void);
extern void fn_8313E8C8(void);
extern int atexit(void (*)(void));
extern int lbl_83293CF0[];

void fn_83120CA8(void)
{
  int x = fn_82F53208();
  lbl_83293CF0[0] = x;
  lbl_83293CF0[1] = (int)"NUIGestureBoxingKick";
  fn_822B7998(x, "NUIGestureBoxingKick", fn_824ACF80, 0x54);
  atexit(fn_8313E8C8);
}
