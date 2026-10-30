extern int fn_82F53208(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_824AD188(void);
extern void fn_8313E8E0(void);
extern int atexit(void (*)(void));
extern int lbl_83293CF8[];

void fn_83120D80(void)
{
  int x = fn_82F53208();
  lbl_83293CF8[0] = x;
  lbl_83293CF8[1] = (int)"NUIGestureBoxingKnee";
  fn_822B7998(x, "NUIGestureBoxingKnee", fn_824AD188, 0x54);
  atexit(fn_8313E8E0);
}
