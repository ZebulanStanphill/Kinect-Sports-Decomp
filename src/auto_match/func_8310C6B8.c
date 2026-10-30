extern int fn_8235A170(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_822AF2C8(void);
extern void fn_8313BB38(void);
extern int atexit(void (*)(void));
extern int lbl_83284CE0[];

void fn_8310C6B8(void)
{
  int x = fn_8235A170();
  lbl_83284CE0[0] = x;
  lbl_83284CE0[1] = (int)"BowlingTeamTacticStateMan";
  fn_822B7998(x, "BowlingTeamTacticStateMan", fn_822AF2C8, 0x30);
  atexit(fn_8313BB38);
}
