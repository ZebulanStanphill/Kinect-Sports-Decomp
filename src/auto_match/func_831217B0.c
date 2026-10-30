extern int fn_82F53208(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_824B2AE0(void);
extern void fn_8313EA78(void);
extern int atexit(void (*)(void));
extern int lbl_832941B8[];

void fn_831217B0(void)
{
  int x = fn_82F53208();
  lbl_832941B8[0] = x;
  lbl_832941B8[1] = (int)"NUIGestureAthleticsJumpLand";
  fn_822B7998(x, "NUIGestureAthleticsJumpLand", fn_824B2AE0, 0x48);
  atexit(fn_8313EA78);
}
