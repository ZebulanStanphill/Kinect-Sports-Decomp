extern int fn_82520C40(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_82463BA8(void);
extern void fn_8313DE68(void);
extern int atexit(void (*)(void));
extern int lbl_8328E08C[];

void fn_8311BF68(void)
{
  int x = fn_82520C40();
  lbl_8328E08C[0] = x;
  lbl_8328E08C[1] = (int)"SceneControllerTPhungDWorkVideo";
  fn_822B7998(x, "SceneControllerTPhungDWorkVideo", fn_82463BA8, 0x4c);
  atexit(fn_8313DE68);
}
