extern int fn_824CD148(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_824E2178(void);
extern void fn_8313EEF0(void);
extern int atexit(void (*)(void));
extern int lbl_8329574C[];

void fn_83123C68(void)
{
  int x = fn_824CD148();
  lbl_8329574C[0] = x;
  lbl_8329574C[1] = (int)"AthleticsHumanControl";
  fn_822B7998(x, "AthleticsHumanControl", fn_824E2178, 0x60);
  atexit(fn_8313EEF0);
}
