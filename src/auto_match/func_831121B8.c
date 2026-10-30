extern int fn_8235A0D0(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_82339268(void);
extern void fn_8313C930(void);
extern int atexit(void (*)(void));
extern int lbl_8328839C[];

void fn_831121B8(void)
{
  int x = fn_8235A0D0();
  lbl_8328839C[0] = x;
  lbl_8328839C[1] = (int)"AthleticsSportsman";
  fn_822B7998(x, "AthleticsSportsman", fn_82339268, 0x58);
  atexit(fn_8313C930);
}
