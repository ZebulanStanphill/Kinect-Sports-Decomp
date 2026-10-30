extern int fn_82F53208(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_824AFBF0(void);
extern void fn_8313E9B8(void);
extern int atexit(void (*)(void));
extern int lbl_83294020[];

void fn_83121350(void)
{
  int x = fn_82F53208();
  lbl_83294020[0] = x;
  lbl_83294020[1] = (int)"NUIGestureAthleticsDiscusThrow";
  fn_822B7998(x, "NUIGestureAthleticsDiscusThrow", fn_824AFBF0, 0x4c);
  atexit(fn_8313E9B8);
}
