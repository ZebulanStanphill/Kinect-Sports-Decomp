extern int fn_82F53208(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_824ABA10(void);
extern void fn_8313E808(void);
extern int atexit(void (*)(void));
extern int lbl_832939B0[];

void fn_831205E8(void)
{
  int x = fn_82F53208();
  lbl_832939B0[0] = x;
  lbl_832939B0[1] = (int)"NUIGestureDribblingEvade";
  fn_822B7998(x, "NUIGestureDribblingEvade", fn_824ABA10, 0x50);
  atexit(fn_8313E808);
}
