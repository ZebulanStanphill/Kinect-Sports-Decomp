extern int fn_82F53208(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_824AC370(void);
extern void fn_8313E868(void);
extern int atexit(void (*)(void));
extern int lbl_83293B50[];

void fn_83120948(void)
{
  int x = fn_82F53208();
  lbl_83293B50[0] = x;
  lbl_83293B50[1] = (int)"NUIGestureBoxingGuardFace";
  fn_822B7998(x, "NUIGestureBoxingGuardFace", fn_824AC370, 0x58);
  atexit(fn_8313E868);
}
