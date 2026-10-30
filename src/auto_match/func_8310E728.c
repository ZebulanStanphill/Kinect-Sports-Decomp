extern int fn_8235A120(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_822D5388(void);
extern void fn_8313C030(void);
extern int atexit(void (*)(void));
extern int lbl_83285F10[];

void fn_8310E728(void)
{
  int x = fn_8235A120();
  lbl_83285F10[0] = x;
  lbl_83285F10[1] = (int)"VolleyballSportsmanMoveStateMan";
  fn_822B7998(x, "VolleyballSportsmanMoveStateMan", fn_822D5388, 0x4c);
  atexit(fn_8313C030);
}
