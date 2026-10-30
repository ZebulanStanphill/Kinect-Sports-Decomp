extern int fn_8235A170(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_822AFDC0(void);
extern void fn_8313BB98(void);
extern int atexit(void (*)(void));
extern int lbl_83284DEC[];

void fn_8310C8E8(void)
{
  int x = fn_8235A170();
  lbl_83284DEC[0] = x;
  lbl_83284DEC[1] = (int)"FootballTeamTacticStateMan";
  fn_822B7998(x, "FootballTeamTacticStateMan", fn_822AFDC0, 0x30);
  atexit(fn_8313BB98);
}
