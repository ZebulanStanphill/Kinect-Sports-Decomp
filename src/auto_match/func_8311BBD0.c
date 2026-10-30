extern int fn_82520C40(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_82463728(void);
extern void fn_8313DE08(void);
extern int atexit(void (*)(void));
extern int lbl_8328DDE4[];

void fn_8311BBD0(void)
{
  int x = fn_82520C40();
  lbl_8328DDE4[0] = x;
  lbl_8328DDE4[1] = (int)"SceneControllerPlayerCalibration";
  fn_822B7998(x, "SceneControllerPlayerCalibration", fn_82463728, 0x120);
  atexit(fn_8313DE08);
}
