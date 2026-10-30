extern int fn_82520C40(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_824610F8(void);
extern void fn_8313DDC0(void);
extern int atexit(void (*)(void));
extern int lbl_8328DCF4[];

void fn_8311B9E0(void)
{
  int x = fn_82520C40();
  lbl_8328DCF4[0] = x;
  lbl_8328DCF4[1] = (int)"SceneControllerPartyMode";
  fn_822B7998(x, "SceneControllerPartyMode", fn_824610F8, 0x64);
  atexit(fn_8313DDC0);
}
