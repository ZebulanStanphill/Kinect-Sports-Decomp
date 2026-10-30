extern int fn_82F53208(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_824AA0F0(void);
extern void fn_8313E760(void);
extern int atexit(void (*)(void));
extern int lbl_83293618[];

void fn_8311FF80(void)
{
  int x = fn_82F53208();
  lbl_83293618[0] = x;
  lbl_83293618[1] = (int)"NUIGestureTableTennisBackSpin";
  fn_822B7998(x, "NUIGestureTableTennisBackSpin", fn_824AA0F0, 0x48);
  atexit(fn_8313E760);
}
