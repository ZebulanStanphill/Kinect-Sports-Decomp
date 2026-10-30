typedef struct {
  union { char buf[16]; void *ptr; } u;
  unsigned size;
  unsigned cap;
  char alloc;
} Str_83107E78;

extern void fn_82230110(Str_83107E78 *, const char *);
extern void fn_82235D10(void *, Str_83107E78 *, int);
extern void fn_8265CA20(void *);
extern void fn_8313A478(void);
extern int atexit(void (*)(void));
extern char lbl_83282898[];

void fn_83107E78(void)
{
  Str_83107E78 s;
  fn_82230110(&s, "HumanControlSport");
  fn_82235D10(lbl_83282898, &s, 4);
  if (s.cap >= 16) {
    fn_8265CA20(s.u.ptr);
  }
  s.size = 0;
  s.cap = 15;
  s.u.buf[0] = 0;
  atexit(fn_8313A478);
}
