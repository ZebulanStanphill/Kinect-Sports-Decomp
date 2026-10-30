extern int fn_8235A0D0(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_822C1B20(void);
extern void fn_8313BEE0(void);
extern int atexit(void (*)(void));
extern int lbl_83285AF8[];

void fn_8310DF38(void)
{
  int x = fn_8235A0D0();
  lbl_83285AF8[0] = x;
  lbl_83285AF8[1] = (int)"BoxingSportsman";
  fn_822B7998(x, "BoxingSportsman", fn_822C1B20, 0x9c);
  atexit(fn_8313BEE0);
}
