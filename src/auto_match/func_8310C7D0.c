extern int fn_8235A170(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_822B02A0(void);
extern void fn_8313BB68(void);
extern int atexit(void (*)(void));
extern int lbl_83284CE8[];

void fn_8310C7D0(void)
{
  int x = fn_8235A170();
  lbl_83284CE8[0] = x;
  lbl_83284CE8[1] = (int)"BoxingTeamTacticsStateMan";
  fn_822B7998(x, "BoxingTeamTacticsStateMan", fn_822B02A0, 0x2c);
  atexit(fn_8313BB68);
}
