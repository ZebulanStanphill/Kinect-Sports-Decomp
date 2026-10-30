extern int fn_82F53208(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_824AA9B0(void);
extern void fn_8313E778(void);
extern int atexit(void (*)(void));
extern int lbl_83293740[];

void fn_831200D8(void)
{
  int x = fn_82F53208();
  lbl_83293740[0] = x;
  lbl_83293740[1] = (int)"NUIGestureTableTennisHitDir";
  fn_822B7998(x, "NUIGestureTableTennisHitDir", fn_824AA9B0, 0x48);
  atexit(fn_8313E778);
}
