typedef struct {
  union { char buf[16]; void *ptr; } u;
  unsigned size;
  unsigned cap;
  char alloc;
} Str_8310A288;

extern void fn_82230110(Str_8310A288 *, const char *);
extern void fn_822579F8(void *, Str_8310A288 *, int);
extern void fn_8265CA20(void *);
extern void fn_8313B1B8(void);
extern int atexit(void (*)(void));
extern char lbl_83283968[];

void fn_8310A288(void)
{
  Str_8310A288 s;
  fn_82230110(&s, "Spectator Manager");
  fn_822579F8(lbl_83283968, &s, 7);
  if (s.cap >= 16) {
    fn_8265CA20(s.u.ptr);
  }
  s.size = 0;
  s.cap = 15;
  s.u.buf[0] = 0;
  atexit(fn_8313B1B8);
}
