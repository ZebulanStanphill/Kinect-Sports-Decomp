extern int fn_824CD148(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_824D3718(void);
extern void fn_8313ED70(void);
extern int atexit(void (*)(void));
extern int lbl_83294C98[];

void fn_83122C88(void)
{
  int x = fn_824CD148();
  lbl_83294C98[0] = x;
  lbl_83294C98[1] = (int)"HumanControlBoxing";
  fn_822B7998(x, "HumanControlBoxing", fn_824D3718, 0x38);
  atexit(fn_8313ED70);
}
