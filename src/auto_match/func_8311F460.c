extern int fn_82F53208(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_824A5268(void);
extern void fn_8313E5E0(void);
extern int atexit(void (*)(void));
extern int lbl_83293120[];

void fn_8311F460(void)
{
  int x = fn_82F53208();
  lbl_83293120[0] = x;
  lbl_83293120[1] = (int)"NUIGestureHandSwipe";
  fn_822B7998(x, "NUIGestureHandSwipe", fn_824A5268, 0x50);
  atexit(fn_8313E5E0);
}
