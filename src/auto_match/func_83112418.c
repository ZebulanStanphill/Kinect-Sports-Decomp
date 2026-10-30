extern int fn_8235A120(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_8233D2E8(void);
extern void fn_8313C990(void);
extern int atexit(void (*)(void));
extern int lbl_83288428[];

void fn_83112418(void)
{
  int x = fn_8235A120();
  lbl_83288428[0] = x;
  lbl_83288428[1] = (int)"AthleticsSportsmanMoveStateMan";
  fn_822B7998(x, "AthleticsSportsmanMoveStateMan", fn_8233D2E8, 0x4c);
  atexit(fn_8313C990);
}
