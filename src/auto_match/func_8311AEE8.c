extern int fn_82432C48(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_82447FC8(void);
extern void fn_8313DB80(void);
extern int atexit(void (*)(void));
extern int lbl_8328D79C[];

void fn_8311AEE8(void)
{
  int x = fn_82432C48();
  lbl_8328D79C[0] = x;
  lbl_8328D79C[1] = (int)"AthleticsEventDiscus";
  fn_822B7998(x, "AthleticsEventDiscus", fn_82447FC8, 0x144);
  atexit(fn_8313DB80);
}
