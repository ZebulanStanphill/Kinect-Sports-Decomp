extern int fn_82F53208(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_824ABF48(void);
extern void fn_8313E838(void);
extern int atexit(void (*)(void));
extern int lbl_83293A80[];

void fn_83120798(void)
{
  int x = fn_82F53208();
  lbl_83293A80[0] = x;
  lbl_83293A80[1] = (int)"NUIGestureDribblingStepOver";
  fn_822B7998(x, "NUIGestureDribblingStepOver", fn_824ABF48, 0x54);
  atexit(fn_8313E838);
}
