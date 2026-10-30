extern int fn_8235A170(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_822B02A0(void);
extern void fn_8313BC28(void);
extern int atexit(void (*)(void));
extern int lbl_83284F7C[];

void fn_8310CC30(void)
{
  int x = fn_8235A170();
  lbl_83284F7C[0] = x;
  lbl_83284F7C[1] = (int)"AthleticsTeamTacticStateMan";
  fn_822B7998(x, "AthleticsTeamTacticStateMan", fn_822B02A0, 0x2c);
  atexit(fn_8313BC28);
}
