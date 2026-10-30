extern int fn_82F53208(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_824A55B0(void);
extern void fn_8313E5F8(void);
extern int atexit(void (*)(void));
extern int lbl_83293128[];

void fn_8311F538(void)
{
  int x = fn_82F53208();
  lbl_83293128[0] = x;
  lbl_83293128[1] = (int)"NUIGestureLasso";
  fn_822B7998(x, "NUIGestureLasso", fn_824A55B0, 0x5c);
  atexit(fn_8313E5F8);
}
