extern int fn_82F53208(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_824B5380(void);
extern void fn_8313EB20(void);
extern int atexit(void (*)(void));
extern int lbl_83294590[];

void fn_83121E00(void)
{
  int x = fn_82F53208();
  lbl_83294590[0] = x;
  lbl_83294590[1] = (int)"VolleyballDiveGesture";
  fn_822B7998(x, "VolleyballDiveGesture", fn_824B5380, 0x48);
  atexit(fn_8313EB20);
}
