typedef struct {
  union { char buf[16]; void *ptr; } u;
  unsigned size;
  unsigned cap;
  char alloc;
} Str_83107B00;

extern void fn_82230110(Str_83107B00 *, const char *);
extern void fn_82235B60(void *, Str_83107B00 *, int);
extern void fn_8265CA20(void *);
extern void fn_8313A388(void);
extern int atexit(void (*)(void));
extern char lbl_832826E0[];

void fn_83107B00(void)
{
  Str_83107B00 s;
  fn_82230110(&s, "OlympusGlobalNetObj");
  fn_82235B60(lbl_832826E0, &s, 4);
  if (s.cap >= 16) {
    fn_8265CA20(s.u.ptr);
  }
  s.size = 0;
  s.cap = 15;
  s.u.buf[0] = 0;
  atexit(fn_8313A388);
}
