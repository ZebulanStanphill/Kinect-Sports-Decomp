extern int fn_82F53208(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_824A98F0(void);
extern void fn_8313E730(void);
extern int atexit(void (*)(void));
extern int lbl_83293544[];

void fn_8311FDD0(void)
{
  int x = fn_82F53208();
  lbl_83293544[0] = x;
  lbl_83293544[1] = (int)"NUIGestureTestUIBack";
  fn_822B7998(x, "NUIGestureTestUIBack", fn_824A98F0, 0x5c);
  atexit(fn_8313E730);
}
