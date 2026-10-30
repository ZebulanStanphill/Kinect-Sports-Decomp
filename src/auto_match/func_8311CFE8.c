extern int fn_82520C40(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_8247E490(void);
extern void fn_8313E0E0(void);
extern int atexit(void (*)(void));
extern int lbl_83291A7C[];

void fn_8311CFE8(void)
{
  int x = fn_82520C40();
  lbl_83291A7C[0] = x;
  lbl_83291A7C[1] = (int)"SceneControllerReceivedInvite";
  fn_822B7998(x, "SceneControllerReceivedInvite", fn_8247E490, 0x48);
  atexit(fn_8313E0E0);
}
