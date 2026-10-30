extern int fn_8235A120(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_82326AD0(void);
extern void fn_8313C6C0(void);
extern int atexit(void (*)(void));
extern int lbl_83287D70[];

void fn_83111688(void)
{
  int x = fn_8235A120();
  lbl_83287D70[0] = x;
  lbl_83287D70[1] = (int)"BoxingMoveStateMan";
  fn_822B7998(x, "BoxingMoveStateMan", fn_82326AD0, 0x54);
  atexit(fn_8313C6C0);
}
