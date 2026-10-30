extern int fn_82432C48(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_8244C450(void);
extern void fn_8313DC10(void);
extern int atexit(void (*)(void));
extern int lbl_8328D92C[];

void fn_8311B230(void)
{
  int x = fn_82432C48();
  lbl_8328D92C[0] = x;
  lbl_8328D92C[1] = (int)"AthleticsEventLongJump";
  fn_822B7998(x, "AthleticsEventLongJump", fn_8244C450, 0x138);
  atexit(fn_8313DC10);
}
