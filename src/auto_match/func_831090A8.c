typedef struct {
  union { char buf[16]; void *ptr; } u;
  unsigned size;
  unsigned cap;
  char alloc;
} Str_831090A8;

extern void fn_82230110(Str_831090A8 *, const char *);
extern void fn_82235B60(void *, Str_831090A8 *, int);
extern void fn_8265CA20(void *);
extern void fn_8313AB78(void);
extern int atexit(void (*)(void));
extern char lbl_83283088[];

void fn_831090A8(void)
{
  Str_831090A8 s;
  fn_82230110(&s, "OlympusGlobalNetObj");
  fn_82235B60(lbl_83283088, &s, 5);
  if (s.cap >= 16) {
    fn_8265CA20(s.u.ptr);
  }
  s.size = 0;
  s.cap = 15;
  s.u.buf[0] = 0;
  atexit(fn_8313AB78);
}
