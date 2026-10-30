extern int fn_8235A0D0(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_822D0020(void);
extern void fn_8313BFB8(void);
extern int atexit(void (*)(void));
extern int lbl_83285D24[];

void fn_8310E408(void)
{
  int x = fn_8235A0D0();
  lbl_83285D24[0] = x;
  lbl_83285D24[1] = (int)"Volleyballer";
  fn_822B7998(x, "Volleyballer", fn_822D0020, 0x98);
  atexit(fn_8313BFB8);
}
