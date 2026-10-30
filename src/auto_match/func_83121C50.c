extern int fn_82F53208(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_824B4E60(void);
extern void fn_8313EAF0(void);
extern int atexit(void (*)(void));
extern int lbl_832944C0[];

void fn_83121C50(void)
{
  int x = fn_82F53208();
  lbl_832944C0[0] = x;
  lbl_832944C0[1] = (int)"VolleyballClaspGesture";
  fn_822B7998(x, "VolleyballClaspGesture", fn_824B4E60, 0x48);
  atexit(fn_8313EAF0);
}
