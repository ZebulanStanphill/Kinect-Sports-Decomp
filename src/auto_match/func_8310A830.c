typedef struct {
  union { char buf[16]; void *ptr; } u;
  unsigned size;
  unsigned cap;
  char alloc;
} Str_8310A830;

extern void fn_82230110(Str_8310A830 *, const char *);
extern void fn_82235B60(void *, Str_8310A830 *, int);
extern void fn_8265CA20(void *);
extern void fn_8313B400(void);
extern int atexit(void (*)(void));
extern char lbl_83283BC8[];

void fn_8310A830(void)
{
  Str_8310A830 s;
  fn_82230110(&s, "OlympusGlobalNetObj");
  fn_82235B60(lbl_83283BC8, &s, 3);
  if (s.cap >= 16) {
    fn_8265CA20(s.u.ptr);
  }
  s.size = 0;
  s.cap = 15;
  s.u.buf[0] = 0;
  atexit(fn_8313B400);
}
