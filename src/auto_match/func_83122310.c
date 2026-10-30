extern int fn_82F53208(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_824B6C10(void);
extern void fn_8313EBB0(void);
extern int atexit(void (*)(void));
extern int lbl_83294800[];

void fn_83122310(void)
{
  int x = fn_82F53208();
  lbl_83294800[0] = x;
  lbl_83294800[1] = (int)"VolleyballSpikeGesture";
  fn_822B7998(x, "VolleyballSpikeGesture", fn_824B6C10, 0x48);
  atexit(fn_8313EBB0);
}
