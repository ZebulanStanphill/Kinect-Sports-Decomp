extern int fn_82432C48(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_82449BD0(void);
extern void fn_8313DBE0(void);
extern int atexit(void (*)(void));
extern int lbl_8328D828[];

void fn_8311B118(void)
{
  int x = fn_82432C48();
  lbl_8328D828[0] = x;
  lbl_8328D828[1] = (int)"AthleticsEventJavelin";
  fn_822B7998(x, "AthleticsEventJavelin", fn_82449BD0, 0x144);
  atexit(fn_8313DBE0);
}
