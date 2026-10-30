extern int fn_8235A080(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_8236D208(void);
extern void fn_8313CBD8(void);
extern int atexit(void (*)(void));
extern int lbl_83288D3C[];

void fn_831132C8(void)
{
  int x = fn_8235A080();
  lbl_83288D3C[0] = x;
  lbl_83288D3C[1] = (int)"FootballController";
  fn_822B7998(x, "FootballController", fn_8236D208, 0xe4);
  atexit(fn_8313CBD8);
}
