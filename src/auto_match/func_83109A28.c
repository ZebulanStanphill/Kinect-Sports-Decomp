typedef struct {
  union { char buf[16]; void *ptr; } u;
  unsigned size;
  unsigned cap;
  char alloc;
} Str_83109A28;

extern void fn_82230110(Str_83109A28 *, const char *);
extern void fn_82235C80(void *, Str_83109A28 *, int);
extern void fn_8265CA20(void *);
extern void fn_8313AED0(void);
extern int atexit(void (*)(void));
extern char lbl_83283550[];

void fn_83109A28(void)
{
  Str_83109A28 s;
  fn_82230110(&s, "Match Manager");
  fn_82235C80(lbl_83283550, &s, 6);
  if (s.cap >= 16) {
    fn_8265CA20(s.u.ptr);
  }
  s.size = 0;
  s.cap = 15;
  s.u.buf[0] = 0;
  atexit(fn_8313AED0);
}
