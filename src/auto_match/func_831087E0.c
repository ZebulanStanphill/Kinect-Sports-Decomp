typedef struct {
  union { char buf[16]; void *ptr; } u;
  unsigned size;
  unsigned cap;
  char alloc;
} Str_831087E0;

extern void fn_82230110(Str_831087E0 *, const char *);
extern void fn_82235B60(void *, Str_831087E0 *, int);
extern void fn_8265CA20(void *);
extern void fn_8313A838(void);
extern int atexit(void (*)(void));
extern char lbl_83282CE8[];

void fn_831087E0(void)
{
  Str_831087E0 s;
  fn_82230110(&s, "OlympusGlobalNetObj");
  fn_82235B60(lbl_83282CE8, &s, 1);
  if (s.cap >= 16) {
    fn_8265CA20(s.u.ptr);
  }
  s.size = 0;
  s.cap = 15;
  s.u.buf[0] = 0;
  atexit(fn_8313A838);
}
