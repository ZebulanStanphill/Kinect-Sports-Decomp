extern int fn_8235A0D0(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_822BD230(void);
extern void fn_8313BEB0(void);
extern int atexit(void (*)(void));
extern int lbl_83285AD4[];

void fn_8310DE20(void)
{
  int x = fn_8235A0D0();
  lbl_83285AD4[0] = x;
  lbl_83285AD4[1] = (int)"Bowler";
  fn_822B7998(x, "Bowler", fn_822BD230, 0x1a4);
  atexit(fn_8313BEB0);
}
