typedef struct {
  union { char buf[16]; void *ptr; } u;
  unsigned size;
  unsigned cap;
  char alloc;
} Str_83108228;

extern void fn_82230110(Str_83108228 *, const char *);
extern void fn_82235C80(void *, Str_83108228 *, int);
extern void fn_8265CA20(void *);
extern void fn_8313A5C0(void);
extern int atexit(void (*)(void));
extern char lbl_83282AA0[];

void fn_83108228(void)
{
  Str_83108228 s;
  fn_82230110(&s, "Match Manager");
  fn_82235C80(lbl_83282AA0, &s, 2);
  if (s.cap >= 16) {
    fn_8265CA20(s.u.ptr);
  }
  s.size = 0;
  s.cap = 15;
  s.u.buf[0] = 0;
  atexit(fn_8313A5C0);
}
