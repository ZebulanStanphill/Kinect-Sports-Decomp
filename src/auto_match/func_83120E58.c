extern int fn_82F53208(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_824AD2D8(void);
extern void fn_8313E8F8(void);
extern int atexit(void (*)(void));
extern int lbl_83293DC0[];

void fn_83120E58(void)
{
  int x = fn_82F53208();
  lbl_83293DC0[0] = x;
  lbl_83293DC0[1] = (int)"NUIGestureBoxingStraight";
  fn_822B7998(x, "NUIGestureBoxingStraight", fn_824AD2D8, 0x58);
  atexit(fn_8313E8F8);
}
