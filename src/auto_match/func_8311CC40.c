extern int fn_82520C40(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_8247B070(void);
extern void fn_8313DFB8(void);
extern int atexit(void (*)(void));
extern int lbl_8328E77C[];

void fn_8311CC40(void)
{
  int x = fn_82520C40();
  lbl_8328E77C[0] = x;
  lbl_8328E77C[1] = (int)"FrontendMain";
  fn_822B7998(x, "FrontendMain", fn_8247B070, 0x5f0);
  atexit(fn_8313DFB8);
}
