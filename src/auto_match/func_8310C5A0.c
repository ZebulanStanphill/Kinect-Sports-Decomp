extern int fn_8235A170(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_822AF1B8(void);
extern void fn_8313BB08(void);
extern int atexit(void (*)(void));
extern int lbl_83284C5C[];

void fn_8310C5A0(void)
{
  int x = fn_8235A170();
  lbl_83284C5C[0] = x;
  lbl_83284C5C[1] = (int)"TeamTacticStateMan";
  fn_822B7998(x, "TeamTacticStateMan", fn_822AF1B8, 0x2c);
  atexit(fn_8313BB08);
}
