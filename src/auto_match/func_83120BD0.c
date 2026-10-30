extern int fn_82F53208(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_824ACCD8(void);
extern void fn_8313E8B0(void);
extern int atexit(void (*)(void));
extern int lbl_83293C28[];

void fn_83120BD0(void)
{
  int x = fn_82F53208();
  lbl_83293C28[0] = x;
  lbl_83293C28[1] = (int)"NUIGestureBoxingJab";
  fn_822B7998(x, "NUIGestureBoxingJab", fn_824ACCD8, 0x5c);
  atexit(fn_8313E8B0);
}
