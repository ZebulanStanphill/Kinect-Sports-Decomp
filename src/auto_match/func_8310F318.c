extern int fn_8235A120(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_822EA6B8(void);
extern void fn_8313C1C8(void);
extern int atexit(void (*)(void));
extern int lbl_8328669C[];

void fn_8310F318(void)
{
  int x = fn_8235A120();
  lbl_8328669C[0] = x;
  lbl_8328669C[1] = (int)"TableTennisMoveStateMan";
  fn_822B7998(x, "TableTennisMoveStateMan", fn_822EA6B8, 0x50);
  atexit(fn_8313C1C8);
}
