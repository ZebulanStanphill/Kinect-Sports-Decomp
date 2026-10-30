extern int fn_82F53208(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_824AB3F8(void);
extern void fn_8313E7D8(void);
extern int atexit(void (*)(void));
extern int lbl_832938E0[];

void fn_83120438(void)
{
  int x = fn_82F53208();
  lbl_832938E0[0] = x;
  lbl_832938E0[1] = (int)"NUIGestureTableTennisTopSpin";
  fn_822B7998(x, "NUIGestureTableTennisTopSpin", fn_824AB3F8, 0x48);
  atexit(fn_8313E7D8);
}
