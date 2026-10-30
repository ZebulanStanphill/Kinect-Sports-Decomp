typedef struct {
  union { char buf[16]; void *ptr; } u;
  unsigned size;
  unsigned cap;
  char alloc;
} Str_8310A998;

extern void fn_82230110(Str_8310A998 *, const char *);
extern void fn_822579F8(void *, Str_8310A998 *, int);
extern void fn_8265CA20(void *);
extern void fn_8313B430(void);
extern int atexit(void (*)(void));
extern char lbl_83283CD0[];

void fn_8310A998(void)
{
  Str_8310A998 s;
  fn_82230110(&s, "Spectator Manager");
  fn_822579F8(lbl_83283CD0, &s, 3);
  if (s.cap >= 16) {
    fn_8265CA20(s.u.ptr);
  }
  s.size = 0;
  s.cap = 15;
  s.u.buf[0] = 0;
  atexit(fn_8313B430);
}
