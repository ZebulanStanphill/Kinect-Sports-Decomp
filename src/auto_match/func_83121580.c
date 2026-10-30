extern int fn_82F53208(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_824B1950(void);
extern void fn_8313EA18(void);
extern int atexit(void (*)(void));
extern int lbl_8329412C[];

void fn_83121580(void)
{
  int x = fn_82F53208();
  lbl_8329412C[0] = x;
  lbl_8329412C[1] = (int)"NUIGestureAthleticsJump";
  fn_822B7998(x, "NUIGestureAthleticsJump", fn_824B1950, 0x50);
  atexit(fn_8313EA18);
}
