extern int fn_82F53208(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_824AE788(void);
extern void fn_8313E988(void);
extern int atexit(void (*)(void));
extern int lbl_83293F9C[];

void fn_83121238(void)
{
  int x = fn_82F53208();
  lbl_83293F9C[0] = x;
  lbl_83293F9C[1] = (int)"NUIGestureAthleticsBoostStart";
  fn_822B7998(x, "NUIGestureAthleticsBoostStart", fn_824AE788, 0x54);
  atexit(fn_8313E988);
}
