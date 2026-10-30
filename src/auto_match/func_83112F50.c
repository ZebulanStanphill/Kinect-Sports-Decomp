extern int fn_8235A080(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_82360EA0(void);
extern void fn_8313CB48(void);
extern int atexit(void (*)(void));
extern int lbl_83288BB0[];

void fn_83112F50(void)
{
  int x = fn_8235A080();
  lbl_83288BB0[0] = x;
  lbl_83288BB0[1] = (int)"BowlingController";
  fn_822B7998(x, "BowlingController", fn_82360EA0, 0x118);
  atexit(fn_8313CB48);
}
