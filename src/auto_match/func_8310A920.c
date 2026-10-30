typedef struct {
  union { char buf[16]; void *ptr; } u;
  unsigned size;
  unsigned cap;
  char alloc;
} Str_8310A920;

extern void fn_82230110(Str_8310A920 *, const char *);
extern void fn_82235C80(void *, Str_8310A920 *, int);
extern void fn_8265CA20(void *);
extern void fn_8313B420(void);
extern int atexit(void (*)(void));
extern char lbl_83283C78[];

void fn_8310A920(void)
{
  Str_8310A920 s;
  fn_82230110(&s, "Match Manager");
  fn_82235C80(lbl_83283C78, &s, 3);
  if (s.cap >= 16) {
    fn_8265CA20(s.u.ptr);
  }
  s.size = 0;
  s.cap = 15;
  s.u.buf[0] = 0;
  atexit(fn_8313B420);
}
