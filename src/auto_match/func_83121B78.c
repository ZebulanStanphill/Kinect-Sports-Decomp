extern int fn_82F53208(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_824B4D00(void);
extern void fn_8313EAD8(void);
extern int atexit(void (*)(void));
extern int lbl_832943F8[];

void fn_83121B78(void)
{
  int x = fn_82F53208();
  lbl_832943F8[0] = x;
  lbl_832943F8[1] = (int)"VolleyballAngularPowerGesture";
  fn_822B7998(x, "VolleyballAngularPowerGesture", fn_824B4D00, 0x48);
  atexit(fn_8313EAD8);
}
