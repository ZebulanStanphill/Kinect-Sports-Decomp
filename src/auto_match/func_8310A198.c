typedef struct {
  union { char buf[16]; void *ptr; } u;
  unsigned size;
  unsigned cap;
  char alloc;
} Str_8310A198;

extern void fn_82230110(Str_8310A198 *, const char *);
extern void fn_82235BF0(void *, Str_8310A198 *, int);
extern void fn_8265CA20(void *);
extern void fn_8313B198(void);
extern int atexit(void (*)(void));
extern char lbl_832838B8[];

void fn_8310A198(void)
{
  Str_8310A198 s;
  fn_82230110(&s, "OlympusPlayerNetObj");
  fn_82235BF0(lbl_832838B8, &s, 7);
  if (s.cap >= 16) {
    fn_8265CA20(s.u.ptr);
  }
  s.size = 0;
  s.cap = 15;
  s.u.buf[0] = 0;
  atexit(fn_8313B198);
}
