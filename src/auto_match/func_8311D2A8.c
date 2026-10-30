extern int fn_82520C40(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_82488B58(void);
extern void fn_8313E170(void);
extern int atexit(void (*)(void));
extern int lbl_83291B74[];

void fn_8311D2A8(void)
{
  int x = fn_82520C40();
  lbl_83291B74[0] = x;
  lbl_83291B74[1] = (int)"SceneControllerCrowdConductableCrowd";
  fn_822B7998(x, "SceneControllerCrowdConductableCrowd", fn_82488B58, 0x48);
  atexit(fn_8313E170);
}
