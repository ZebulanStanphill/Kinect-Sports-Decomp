typedef struct {
  union { char buf[16]; void *ptr; } u;
  unsigned size;
  unsigned cap;
  char alloc;
} Str_83108480;

typedef struct {
  int pad[4];
  void *mgr;
} Fn_83108480;

extern void fn_82230110(Str_83108480 *, const char *);
extern void fn_82517C10(void *, Str_83108480 *, int, int, void (*)(void), void (*)(void), void (*)(void), void (*)(void), Fn_83108480 *);
extern void fn_82359C18(Fn_83108480 *);
extern int fn_82518120(void);
extern void fn_82518248(int, int, void *);
extern void fn_8265CA20(void *);
extern void fn_82241D00(void);
extern void fn_8251C5A0(void);
extern void fn_82241D70(void);
extern void fn_82241DF0(void);
extern void fn_8313A690(void);
extern int atexit(void (*)(void));
extern int lbl_83282BA8[];

void fn_83108480(void)
{
  Str_83108480 s;
  Fn_83108480 f;
  int r;
  fn_82230110(&s, "SportsmanTableTennis");
  f.mgr = 0;
  fn_82517C10(lbl_83282BA8, &s, 0xa, 24, fn_82241D00, fn_8251C5A0, fn_82241D70, fn_82241DF0, &f);
  fn_82359C18(&f);
  lbl_83282BA8[20] = 2;
  r = fn_82518120();
  fn_82518248(r, 2, lbl_83282BA8);
  if (s.cap >= 16) {
    fn_8265CA20(s.u.ptr);
  }
  s.size = 0;
  s.cap = 15;
  s.u.buf[0] = 0;
  atexit(fn_8313A690);
}
