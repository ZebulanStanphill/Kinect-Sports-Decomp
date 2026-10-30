extern int fn_82520C40(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_82461EE0(void);
extern void fn_8313DDF0(void);
extern int atexit(void (*)(void));
extern int lbl_8328DDDC[];

void fn_8311BAF8(void)
{
  int x = fn_82520C40();
  lbl_8328DDDC[0] = x;
  lbl_8328DDDC[1] = (int)"SceneControllerPause";
  fn_822B7998(x, "SceneControllerPause", fn_82461EE0, 0x68);
  atexit(fn_8313DDF0);
}
