extern int fn_82F53208(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_824A9590(void);
extern void fn_8313E718(void);
extern int atexit(void (*)(void));
extern int lbl_8329353C[];

void fn_8311FCF8(void)
{
  int x = fn_82F53208();
  lbl_8329353C[0] = x;
  lbl_8329353C[1] = (int)"NUIGestureWave";
  fn_822B7998(x, "NUIGestureWave", fn_824A9590, 0x74);
  atexit(fn_8313E718);
}
