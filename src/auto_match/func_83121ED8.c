extern int fn_82F53208(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_824B5590(void);
extern void fn_8313EB38(void);
extern int atexit(void (*)(void));
extern int lbl_83294598[];

void fn_83121ED8(void)
{
  int x = fn_82F53208();
  lbl_83294598[0] = x;
  lbl_83294598[1] = (int)"VolleyballHitsScaleGesture";
  fn_822B7998(x, "VolleyballHitsScaleGesture", fn_824B5590, 0x48);
  atexit(fn_8313EB38);
}
