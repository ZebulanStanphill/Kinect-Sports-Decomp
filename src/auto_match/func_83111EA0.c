extern int fn_8235A120(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_82333D80(void);
extern void fn_8313C8D0(void);
extern int atexit(void (*)(void));
extern int lbl_83288138[];

void fn_83111EA0(void)
{
  int x = fn_8235A120();
  lbl_83288138[0] = x;
  lbl_83288138[1] = (int)"BowlingSportsmanMoveStateMan";
  fn_822B7998(x, "BowlingSportsmanMoveStateMan", fn_82333D80, 0x58);
  atexit(fn_8313C8D0);
}
