extern int fn_8235A170(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_822B0238(void);
extern void fn_8313BBC8(void);
extern int atexit(void (*)(void));
extern int lbl_83284E70[];

void fn_8310CA00(void)
{
  int x = fn_8235A170();
  lbl_83284E70[0] = x;
  lbl_83284E70[1] = (int)"VolleyballTeamTacticStateMan";
  fn_822B7998(x, "VolleyballTeamTacticStateMan", fn_822B0238, 0x30);
  atexit(fn_8313BBC8);
}
