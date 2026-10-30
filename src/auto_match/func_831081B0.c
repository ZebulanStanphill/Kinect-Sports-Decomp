typedef struct {
  union { char buf[16]; void *ptr; } u;
  unsigned size;
  unsigned cap;
  char alloc;
} Str_831081B0;

extern void fn_82230110(Str_831081B0 *, const char *);
extern void fn_82235BF0(void *, Str_831081B0 *, int);
extern void fn_8265CA20(void *);
extern void fn_8313A5B0(void);
extern int atexit(void (*)(void));
extern char lbl_83282A48[];

void fn_831081B0(void)
{
  Str_831081B0 s;
  fn_82230110(&s, "OlympusPlayerNetObj");
  fn_82235BF0(lbl_83282A48, &s, 2);
  if (s.cap >= 16) {
    fn_8265CA20(s.u.ptr);
  }
  s.size = 0;
  s.cap = 15;
  s.u.buf[0] = 0;
  atexit(fn_8313A5B0);
}
