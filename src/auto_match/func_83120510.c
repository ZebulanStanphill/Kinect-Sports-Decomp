extern int fn_82F53208(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_824AB7A0(void);
extern void fn_8313E7F0(void);
extern int atexit(void (*)(void));
extern int lbl_832938E8[];

void fn_83120510(void)
{
  int x = fn_82F53208();
  lbl_832938E8[0] = x;
  lbl_832938E8[1] = (int)"NUIGesturePunchingDodge";
  fn_822B7998(x, "NUIGesturePunchingDodge", fn_824AB7A0, 0x7c);
  atexit(fn_8313E7F0);
}
