extern int fn_82F53208(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_824B5DE0(void);
extern void fn_8313EB80(void);
extern int atexit(void (*)(void));
extern int lbl_83294730[];

void fn_83122160(void)
{
  int x = fn_82F53208();
  lbl_83294730[0] = x;
  lbl_83294730[1] = (int)"VolleyballReachUpGesture";
  fn_822B7998(x, "VolleyballReachUpGesture", fn_824B5DE0, 0x48);
  atexit(fn_8313EB80);
}
