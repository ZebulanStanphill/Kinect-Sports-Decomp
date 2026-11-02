typedef struct { union { char *p; char buf[16]; } u; unsigned size; unsigned cap; int alloc; } Str_831098B0;
extern void fn_82230110(Str_831098B0 *, const char *);
extern void fn_822376D8(void *, int, int, Str_831098B0 *, int, int, int, int);
extern void fn_8265CA20(char *);
extern int atexit(void (*)(void));
extern void fn_8313AE48(void);
extern char lbl_83283458[];

void fn_831098B0(void)
{
  Str_831098B0 s;
  fn_82230110(&s, "Boxing");
  fn_822376D8(lbl_83283458, 7, 6, &s, 0, 1, 1, 1);
  if (s.cap >= 0x10) {
    fn_8265CA20(s.u.p);
  }
  s.size = 0;
  s.cap = 0xf;
  s.u.buf[0] = 0;
  atexit(fn_8313AE48);
}
