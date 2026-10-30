extern int fn_82F53208(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_824B7050(void);
extern void fn_8313EBC8(void);
extern int atexit(void (*)(void));
extern int lbl_83294808[];

void fn_831223E8(void)
{
  int x = fn_82F53208();
  lbl_83294808[0] = x;
  lbl_83294808[1] = (int)"VolleyballSwipeGesture";
  fn_822B7998(x, "VolleyballSwipeGesture", fn_824B7050, 0x48);
  atexit(fn_8313EBC8);
}
