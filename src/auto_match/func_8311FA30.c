extern int fn_82F53208(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_824A8370(void);
extern void fn_8313E6B8(void);
extern int atexit(void (*)(void));
extern int lbl_83293384[];

void fn_8311FA30(void)
{
  int x = fn_82F53208();
  lbl_83293384[0] = x;
  lbl_83293384[1] = (int)"NUIGestureStepTogether";
  fn_822B7998(x, "NUIGestureStepTogether", fn_824A8370, 0x5c);
  atexit(fn_8313E6B8);
}
