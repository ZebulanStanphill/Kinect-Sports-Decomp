extern int fn_82432C48(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_82449050(void);
extern void fn_8313DBB0(void);
extern int atexit(void (*)(void));
extern int lbl_8328D820[];

void fn_8311B000(void)
{
  int x = fn_82432C48();
  lbl_8328D820[0] = x;
  lbl_8328D820[1] = (int)"AthleticsEventHurdles";
  fn_822B7998(x, "AthleticsEventHurdles", fn_82449050, 0x1b4);
  atexit(fn_8313DBB0);
}
