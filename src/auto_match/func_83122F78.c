extern int fn_824CD148(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_824D7118(void);
extern void fn_8313EDE8(void);
extern int atexit(void (*)(void));
extern int lbl_83294E9C[];

void fn_83122F78(void)
{
  int x = fn_824CD148();
  lbl_83294E9C[0] = x;
  lbl_83294E9C[1] = (int)"HumanControlVolleyball";
  fn_822B7998(x, "HumanControlVolleyball", fn_824D7118, 0x74);
  atexit(fn_8313EDE8);
}
