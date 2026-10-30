extern int fn_82F53208(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_824B5018(void);
extern void fn_8313EB08(void);
extern int atexit(void (*)(void));
extern int lbl_832944C8[];

void fn_83121D28(void)
{
  int x = fn_82F53208();
  lbl_832944C8[0] = x;
  lbl_832944C8[1] = (int)"VolleyballDirGesture";
  fn_822B7998(x, "VolleyballDirGesture", fn_824B5018, 0x48);
  atexit(fn_8313EB08);
}
