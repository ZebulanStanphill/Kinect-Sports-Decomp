extern int fn_8235A0D0(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_822E7D80(void);
extern void fn_8313C198(void);
extern int atexit(void (*)(void));
extern int lbl_832865B8[];

void fn_8310F200(void)
{
  int x = fn_8235A0D0();
  lbl_832865B8[0] = x;
  lbl_832865B8[1] = (int)"TableTennisSportsman";
  fn_822B7998(x, "TableTennisSportsman", fn_822E7D80, 0x58);
  atexit(fn_8313C198);
}
