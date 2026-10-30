extern int fn_82F53208(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_824A4F68(void);
extern void fn_8313E5C8(void);
extern int atexit(void (*)(void));
extern int lbl_83293050[];

void fn_8311F308(void)
{
  int x = fn_82F53208();
  lbl_83293050[0] = x;
  lbl_83293050[1] = (int)"NUIGestureButtonPress";
  fn_822B7998(x, "NUIGestureButtonPress", fn_824A4F68, 0x58);
  atexit(fn_8313E5C8);
}
