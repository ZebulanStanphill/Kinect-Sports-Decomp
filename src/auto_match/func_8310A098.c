typedef struct { union { char *p; char buf[16]; } u; unsigned size; unsigned cap; int alloc; } Str_8310A098;
extern void fn_82230110(Str_8310A098 *, const char *);
extern void fn_822376D8(void *, int, int, Str_8310A098 *, int, int, int, int);
extern void fn_8265CA20(char *);
extern int atexit(void (*)(void));
extern void fn_8313B120(void);
extern char lbl_83283818[];

void fn_8310A098(void)
{
  Str_8310A098 s;
  fn_82230110(&s, "Bowling");
  fn_822376D8(lbl_83283818, 8, 7, &s, 0, 1, 1, 1);
  if (s.cap >= 0x10) {
    fn_8265CA20(s.u.p);
  }
  s.size = 0;
  s.cap = 0xf;
  s.u.buf[0] = 0;
  atexit(fn_8313B120);
}
