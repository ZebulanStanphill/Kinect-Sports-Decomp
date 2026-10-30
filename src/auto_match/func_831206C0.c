extern int fn_82F53208(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_824ABC40(void);
extern void fn_8313E820(void);
extern int atexit(void (*)(void));
extern int lbl_832939B8[];

void fn_831206C0(void)
{
  int x = fn_82F53208();
  lbl_832939B8[0] = x;
  lbl_832939B8[1] = (int)"NUIGestureDribblingSideStep";
  fn_822B7998(x, "NUIGestureDribblingSideStep", fn_824ABC40, 0x50);
  atexit(fn_8313E820);
}
