extern int fn_8235A080(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_8239DCF8(void);
extern void fn_8313CEC0(void);
extern int atexit(void (*)(void));
extern int lbl_83289AFC[];

void fn_83114BA0(void)
{
  int x = fn_8235A080();
  lbl_83289AFC[0] = x;
  lbl_83289AFC[1] = (int)"TableTennisController";
  fn_822B7998(x, "TableTennisController", fn_8239DCF8, 0x94);
  atexit(fn_8313CEC0);
}
