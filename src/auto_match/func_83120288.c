extern int fn_82F53208(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_824AAD98(void);
extern void fn_8313E7A8(void);
extern int atexit(void (*)(void));
extern int lbl_83293810[];

void fn_83120288(void)
{
  int x = fn_82F53208();
  lbl_83293810[0] = x;
  lbl_83293810[1] = (int)"NUIGestureTableTennisServeThrow";
  fn_822B7998(x, "NUIGestureTableTennisServeThrow", fn_824AAD98, 0x48);
  atexit(fn_8313E7A8);
}
