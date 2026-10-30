extern int fn_8235A080(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_82365538(void);
extern void fn_8313CB90(void);
extern int atexit(void (*)(void));
extern int lbl_83288C3C[];

void fn_831130F0(void)
{
  int x = fn_8235A080();
  lbl_83288C3C[0] = x;
  lbl_83288C3C[1] = (int)"BoxingController";
  fn_822B7998(x, "BoxingController", fn_82365538, 0xdc);
  atexit(fn_8313CB90);
}
