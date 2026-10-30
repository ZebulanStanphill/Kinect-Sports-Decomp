extern int fn_82F53208(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_824ADDB8(void);
extern void fn_8313E958(void);
extern int atexit(void (*)(void));
extern int lbl_83293E98[];

void fn_83121120(void)
{
  int x = fn_82F53208();
  lbl_83293E98[0] = x;
  lbl_83293E98[1] = (int)"NUIGestureAthleticsBoostFinish";
  fn_822B7998(x, "NUIGestureAthleticsBoostFinish", fn_824ADDB8, 0x48);
  atexit(fn_8313E958);
}
