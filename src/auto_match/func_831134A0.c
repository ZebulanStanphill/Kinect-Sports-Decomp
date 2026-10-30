extern int fn_8235A080(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_823767D0(void);
extern void fn_8313CC20(void);
extern int atexit(void (*)(void));
extern int lbl_83288E3C[];

void fn_831134A0(void)
{
  int x = fn_8235A080();
  lbl_83288E3C[0] = x;
  lbl_83288E3C[1] = (int)"VolleyballController";
  fn_822B7998(x, "VolleyballController", fn_823767D0, 0x60);
  atexit(fn_8313CC20);
}
