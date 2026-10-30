extern int fn_8235A080(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_8242E9B8(void);
extern void fn_8313D9C0(void);
extern int atexit(void (*)(void));
extern int lbl_8328CF88[];

void fn_8311A208(void)
{
  int x = fn_8235A080();
  lbl_8328CF88[0] = x;
  lbl_8328CF88[1] = (int)"AthleticsController";
  fn_822B7998(x, "AthleticsController", fn_8242E9B8, 0x88);
  atexit(fn_8313D9C0);
}
