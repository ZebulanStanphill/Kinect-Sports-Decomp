extern int fn_82F53208(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_824A9EF8(void);
extern void fn_8313E748(void);
extern int atexit(void (*)(void));
extern int lbl_83293610[];

void fn_8311FEA8(void)
{
  int x = fn_82F53208();
  lbl_83293610[0] = x;
  lbl_83293610[1] = (int)"NUIGestureTestUIPushForwards";
  fn_822B7998(x, "NUIGestureTestUIPushForwards", fn_824A9EF8, 0x60);
  atexit(fn_8313E748);
}
