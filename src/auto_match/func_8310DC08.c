extern int fn_8235A0D0(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_822B78B8(void);
extern void fn_8313BE50(void);
extern int atexit(void (*)(void));
extern int lbl_832859B0[];

void fn_8310DC08(void)
{
  int x = fn_8235A0D0();
  lbl_832859B0[0] = x;
  lbl_832859B0[1] = (int)"Sportsman";
  fn_822B7998(x, "Sportsman", fn_822B78B8, 0x4c);
  atexit(fn_8313BE50);
}
