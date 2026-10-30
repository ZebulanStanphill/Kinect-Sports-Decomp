extern int fn_82F53208(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_824AC138(void);
extern void fn_8313E850(void);
extern int atexit(void (*)(void));
extern int lbl_83293A88[];

void fn_83120870(void)
{
  int x = fn_82F53208();
  lbl_83293A88[0] = x;
  lbl_83293A88[1] = (int)"NUIGestureDribblingTrap";
  fn_822B7998(x, "NUIGestureDribblingTrap", fn_824AC138, 0x54);
  atexit(fn_8313E850);
}
