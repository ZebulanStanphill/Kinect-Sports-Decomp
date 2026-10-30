extern int fn_82F53208(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_824B22E0(void);
extern void fn_8313EA48(void);
extern int atexit(void (*)(void));
extern int lbl_832941B0[];

void fn_83121698(void)
{
  int x = fn_82F53208();
  lbl_832941B0[0] = x;
  lbl_832941B0[1] = (int)"NUIGestureAthleticsJumpBoost";
  fn_822B7998(x, "NUIGestureAthleticsJumpBoost", fn_824B22E0, 0x48);
  atexit(fn_8313EA48);
}
