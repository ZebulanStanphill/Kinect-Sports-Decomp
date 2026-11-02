typedef struct { union { char *p; char buf[16]; } u; unsigned size; unsigned cap; int alloc; } Str_8310A7A8;
extern void fn_82230110(Str_8310A7A8 *, const char *);
extern void fn_822376D8(void *, int, int, Str_8310A7A8 *, int, int, int, int);
extern void fn_8265CA20(char *);
extern int atexit(void (*)(void));
extern void fn_8313B398(void);
extern char lbl_83283B80[];

void fn_8310A7A8(void)
{
  Str_8310A7A8 s;
  fn_82230110(&s, "Athletics");
  fn_822376D8(lbl_83283B80, 4, 3, &s, 0, 1, 1, 1);
  if (s.cap >= 0x10) {
    fn_8265CA20(s.u.p);
  }
  s.size = 0;
  s.cap = 0xf;
  s.u.buf[0] = 0;
  atexit(fn_8313B398);
}
