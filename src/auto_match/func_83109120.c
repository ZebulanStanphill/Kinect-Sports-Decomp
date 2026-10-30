typedef struct {
  union { char buf[16]; void *ptr; } u;
  unsigned size;
  unsigned cap;
  char alloc;
} Str_83109120;

extern void fn_82230110(Str_83109120 *, const char *);
extern void fn_82235BF0(void *, Str_83109120 *, int);
extern void fn_8265CA20(void *);
extern void fn_8313AB88(void);
extern int atexit(void (*)(void));
extern char lbl_832830E0[];

void fn_83109120(void)
{
  Str_83109120 s;
  fn_82230110(&s, "OlympusPlayerNetObj");
  fn_82235BF0(lbl_832830E0, &s, 5);
  if (s.cap >= 16) {
    fn_8265CA20(s.u.ptr);
  }
  s.size = 0;
  s.cap = 15;
  s.u.buf[0] = 0;
  atexit(fn_8313AB88);
}
