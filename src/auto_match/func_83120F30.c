extern int fn_82F53208(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_824AD578(void);
extern void fn_8313E910(void);
extern int atexit(void (*)(void));
extern int lbl_83293DC8[];

void fn_83120F30(void)
{
  int x = fn_82F53208();
  lbl_83293DC8[0] = x;
  lbl_83293DC8[1] = (int)"NUIGestureBoxingUppercut";
  fn_822B7998(x, "NUIGestureBoxingUppercut", fn_824AD578, 0x58);
  atexit(fn_8313E910);
}
