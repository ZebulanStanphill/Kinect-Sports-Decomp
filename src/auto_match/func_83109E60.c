typedef struct {
  union { char buf[16]; void *ptr; } u;
  unsigned size;
  unsigned cap;
  char alloc;
} Str_83109E60;

extern void fn_82230110(Str_83109E60 *, const char *);
extern void fn_82235D10(void *, Str_83109E60 *, int);
extern void fn_8265CA20(void *);
extern void fn_8313B060(void);
extern int atexit(void (*)(void));
extern char lbl_83283708[];

void fn_83109E60(void)
{
  Str_83109E60 s;
  fn_82230110(&s, "HumanControlSport");
  fn_82235D10(lbl_83283708, &s, 6);
  if (s.cap >= 16) {
    fn_8265CA20(s.u.ptr);
  }
  s.size = 0;
  s.cap = 15;
  s.u.buf[0] = 0;
  atexit(fn_8313B060);
}
