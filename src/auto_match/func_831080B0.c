typedef struct { union { char *p; char buf[16]; } u; unsigned size; unsigned cap; int alloc; } Str_831080B0;
extern void fn_82230110(Str_831080B0 *, const char *);
extern void fn_822376D8(void *, int, int, Str_831080B0 *, int, int, int, int);
extern void fn_8265CA20(char *);
extern int atexit(void (*)(void));
extern void fn_8313A538(void);
extern char lbl_832829A8[];

void fn_831080B0(void)
{
  Str_831080B0 s;
  fn_82230110(&s, "Table Tennis");
  fn_822376D8(lbl_832829A8, 3, 2, &s, 0, 1, 1, 1);
  if (s.cap >= 0x10) {
    fn_8265CA20(s.u.p);
  }
  s.size = 0;
  s.cap = 0xf;
  s.u.buf[0] = 0;
  atexit(fn_8313A538);
}
