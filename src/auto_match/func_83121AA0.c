extern int fn_82F53208(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_824B4BB8(void);
extern void fn_8313EAC0(void);
extern int atexit(void (*)(void));
extern int lbl_832943F0[];

void fn_83121AA0(void)
{
  int x = fn_82F53208();
  lbl_832943F0[0] = x;
  lbl_832943F0[1] = (int)"VolleyballAngularDirGesture";
  fn_822B7998(x, "VolleyballAngularDirGesture", fn_824B4BB8, 0x48);
  atexit(fn_8313EAC0);
}
