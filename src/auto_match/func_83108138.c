typedef struct {
  union { char buf[16]; void *ptr; } u;
  unsigned size;
  unsigned cap;
  char alloc;
} Str_83108138;

extern void fn_82230110(Str_83108138 *, const char *);
extern void fn_82235B60(void *, Str_83108138 *, int);
extern void fn_8265CA20(void *);
extern void fn_8313A5A0(void);
extern int atexit(void (*)(void));
extern char lbl_832829F0[];

void fn_83108138(void)
{
  Str_83108138 s;
  fn_82230110(&s, "OlympusGlobalNetObj");
  fn_82235B60(lbl_832829F0, &s, 2);
  if (s.cap >= 16) {
    fn_8265CA20(s.u.ptr);
  }
  s.size = 0;
  s.cap = 15;
  s.u.buf[0] = 0;
  atexit(fn_8313A5A0);
}
