extern int fn_82F53208(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_824B4100(void);
extern void fn_8313EAA8(void);
extern int atexit(void (*)(void));
extern int lbl_832942BC[];

void fn_831218C8(void)
{
  int x = fn_82F53208();
  lbl_832942BC[0] = x;
  lbl_832942BC[1] = (int)"NUIGestureAthleticsRun";
  fn_822B7998(x, "NUIGestureAthleticsRun", fn_824B4100, 0x50);
  atexit(fn_8313EAA8);
}
