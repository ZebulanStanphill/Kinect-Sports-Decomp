extern int fn_8235A0D0(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_822C5B80(void);
extern void fn_8313BF10(void);
extern int atexit(void (*)(void));
extern int lbl_83285BDC[];

void fn_8310E050(void)
{
  int x = fn_8235A0D0();
  lbl_83285BDC[0] = x;
  lbl_83285BDC[1] = (int)"Footballer";
  fn_822B7998(x, "Footballer", fn_822C5B80, 0x6c);
  atexit(fn_8313BF10);
}
