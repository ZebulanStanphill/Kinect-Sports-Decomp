extern int fn_824CD148(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_824D7DB8(void);
extern void fn_8313EE18(void);
extern int atexit(void (*)(void));
extern int lbl_83294F20[];

void fn_83123090(void)
{
  int x = fn_824CD148();
  lbl_83294F20[0] = x;
  lbl_83294F20[1] = (int)"TableTennisHumanControl";
  fn_822B7998(x, "TableTennisHumanControl", fn_824D7DB8, 0x50);
  atexit(fn_8313EE18);
}
