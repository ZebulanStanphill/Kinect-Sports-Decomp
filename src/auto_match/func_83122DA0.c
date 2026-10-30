extern int fn_824CD148(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_824D4A70(void);
extern void fn_8313EDA0(void);
extern int atexit(void (*)(void));
extern int lbl_83294D9C[];

void fn_83122DA0(void)
{
  int x = fn_824CD148();
  lbl_83294D9C[0] = x;
  lbl_83294D9C[1] = (int)"HumanControlFootball";
  fn_822B7998(x, "HumanControlFootball", fn_824D4A70, 0x4c);
  atexit(fn_8313EDA0);
}
