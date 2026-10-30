extern int fn_82F53208(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_824B1060(void);
extern void fn_8313E9E8(void);
extern int atexit(void (*)(void));
extern int lbl_83294028[];

void fn_83121468(void)
{
  int x = fn_82F53208();
  lbl_83294028[0] = x;
  lbl_83294028[1] = (int)"NUIGestureAthleticsJavelinThrow";
  fn_822B7998(x, "NUIGestureAthleticsJavelinThrow", fn_824B1060, 0x70);
  atexit(fn_8313E9E8);
}
