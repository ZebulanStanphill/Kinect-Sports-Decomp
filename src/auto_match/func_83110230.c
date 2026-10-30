extern int fn_8235A120(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_822FF1C0(void);
extern void fn_8313C3D8(void);
extern int atexit(void (*)(void));
extern int lbl_8328705C[];

void fn_83110230(void)
{
  int x = fn_8235A120();
  lbl_8328705C[0] = x;
  lbl_8328705C[1] = (int)"FootballerMoveStateMan";
  fn_822B7998(x, "FootballerMoveStateMan", fn_822FF1C0, 0x54);
  atexit(fn_8313C3D8);
}
