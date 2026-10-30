extern int fn_82432C48(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_82450680(void);
extern void fn_8313DC40(void);
extern int atexit(void (*)(void));
extern int lbl_8328D9B0[];

void fn_8311B348(void)
{
  int x = fn_82432C48();
  lbl_8328D9B0[0] = x;
  lbl_8328D9B0[1] = (int)"AthleticsEventRace";
  fn_822B7998(x, "AthleticsEventRace", fn_82450680, 0x19c);
  atexit(fn_8313DC40);
}
