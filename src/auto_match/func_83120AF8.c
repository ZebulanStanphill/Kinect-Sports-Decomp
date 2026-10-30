extern int fn_82F53208(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_824AC9B0(void);
extern void fn_8313E898(void);
extern int atexit(void (*)(void));
extern int lbl_83293C20[];

void fn_83120AF8(void)
{
  int x = fn_82F53208();
  lbl_83293C20[0] = x;
  lbl_83293C20[1] = (int)"NUIGestureBoxingHook";
  fn_822B7998(x, "NUIGestureBoxingHook", fn_824AC9B0, 0x58);
  atexit(fn_8313E898);
}
