extern int fn_82F53208(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_824AC648(void);
extern void fn_8313E880(void);
extern int atexit(void (*)(void));
extern int lbl_83293B58[];

void fn_83120A20(void)
{
  int x = fn_82F53208();
  lbl_83293B58[0] = x;
  lbl_83293B58[1] = (int)"NUIGestureBoxingHeadbutt";
  fn_822B7998(x, "NUIGestureBoxingHeadbutt", fn_824AC648, 0x5c);
  atexit(fn_8313E880);
}
