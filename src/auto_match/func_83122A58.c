extern int fn_824CD148(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_824CEE50(void);
extern void fn_8313ED10(void);
extern int atexit(void (*)(void));
extern int lbl_83294C0C[];

void fn_83122A58(void)
{
  int x = fn_824CD148();
  lbl_83294C0C[0] = x;
  lbl_83294C0C[1] = (int)"HumanControlSport";
  fn_822B7998(x, "HumanControlSport", fn_824CEE50, 0x30);
  atexit(fn_8313ED10);
}
