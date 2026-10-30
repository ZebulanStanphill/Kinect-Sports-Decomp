extern int fn_82F53208(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_824A6398(void);
extern void fn_8313E658(void);
extern int atexit(void (*)(void));
extern int lbl_83293290[];

void fn_8311F768(void)
{
  int x = fn_82F53208();
  lbl_83293290[0] = x;
  lbl_83293290[1] = (int)"NUIGestureRaiseHandsCelebration";
  fn_822B7998(x, "NUIGestureRaiseHandsCelebration", fn_824A6398, 0x48);
  atexit(fn_8313E658);
}
