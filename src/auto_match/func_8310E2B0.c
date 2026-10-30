extern int fn_8235A120(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_822C9EB0(void);
extern void fn_8313BF70(void);
extern int atexit(void (*)(void));
extern int lbl_83285C68[];

void fn_8310E2B0(void)
{
  int x = fn_8235A120();
  lbl_83285C68[0] = x;
  lbl_83285C68[1] = (int)"SportsmanMoveStateMan";
  fn_822B7998(x, "SportsmanMoveStateMan", fn_822C9EB0, 0x4c);
  atexit(fn_8313BF70);
}
