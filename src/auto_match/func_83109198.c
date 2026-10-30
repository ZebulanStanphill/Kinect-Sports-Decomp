typedef struct {
  union { char buf[16]; void *ptr; } u;
  unsigned size;
  unsigned cap;
  char alloc;
} Str_83109198;

extern void fn_82230110(Str_83109198 *, const char *);
extern void fn_82235C80(void *, Str_83109198 *, int);
extern void fn_8265CA20(void *);
extern void fn_8313AB98(void);
extern int atexit(void (*)(void));
extern char lbl_83283138[];

void fn_83109198(void)
{
  Str_83109198 s;
  fn_82230110(&s, "Match Manager");
  fn_82235C80(lbl_83283138, &s, 5);
  if (s.cap >= 16) {
    fn_8265CA20(s.u.ptr);
  }
  s.size = 0;
  s.cap = 15;
  s.u.buf[0] = 0;
  atexit(fn_8313AB98);
}
