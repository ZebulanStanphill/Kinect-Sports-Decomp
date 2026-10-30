extern int fn_82F53208(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_824B5B00(void);
extern void fn_8313EB68(void);
extern int atexit(void (*)(void));
extern int lbl_83294668[];

void fn_83122088(void)
{
  int x = fn_82F53208();
  lbl_83294668[0] = x;
  lbl_83294668[1] = (int)"VolleyballPowerGesture";
  fn_822B7998(x, "VolleyballPowerGesture", fn_824B5B00, 0x48);
  atexit(fn_8313EB68);
}
