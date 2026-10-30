extern int fn_82F53208(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_824AB260(void);
extern void fn_8313E7C0(void);
extern int atexit(void (*)(void));
extern int lbl_83293818[];

void fn_83120360(void)
{
  int x = fn_82F53208();
  lbl_83293818[0] = x;
  lbl_83293818[1] = (int)"NUIGestureTableTennisStretch";
  fn_822B7998(x, "NUIGestureTableTennisStretch", fn_824AB260, 0x48);
  atexit(fn_8313E7C0);
}
