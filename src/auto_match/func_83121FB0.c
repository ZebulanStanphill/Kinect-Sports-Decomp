extern int fn_82F53208(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_824B56F8(void);
extern void fn_8313EB50(void);
extern int atexit(void (*)(void));
extern int lbl_83294660[];

void fn_83121FB0(void)
{
  int x = fn_82F53208();
  lbl_83294660[0] = x;
  lbl_83294660[1] = (int)"VolleyballLeapGesture";
  fn_822B7998(x, "VolleyballLeapGesture", fn_824B56F8, 0x48);
  atexit(fn_8313EB50);
}
