typedef struct {
  union { char buf[16]; void *ptr; } u;
  unsigned size;
  unsigned cap;
  char alloc;
} Str_83107D70;

typedef struct {
  void *vt;
  void (*f)(void);
} Impl_83107D70;

typedef struct {
  Impl_83107D70 impl;
  int pad[2];
  Impl_83107D70 *mgr;
} Fn_83107D70;

extern void fn_82230110(Str_83107D70 *, const char *);
extern void fn_82517C10(void *, Str_83107D70 *, int, int, void (*)(void), void (*)(void), void (*)(void), void (*)(void), Fn_83107D70 *);
extern void fn_82359C18(Fn_83107D70 *);
extern int fn_82518120(void);
extern void fn_82518248(int, int, void *);
extern void fn_8265CA20(void *);
extern void fn_822397B0(void);
extern void fn_82238AC0(void);
extern void fn_8251C5A0(void);
extern void fn_82238B78(void);
extern void fn_82238C38(void);
extern void fn_8313A418(void);
extern int atexit(void (*)(void));
extern int lbl_83282840[];
extern char lbl_82196E7C[];

void fn_83107D70(void)
{
  Str_83107D70 s;
  Fn_83107D70 f;
  int r;
  void (*p)(void);
  fn_82230110(&s, "SportsmanVolleyball");
  p = fn_822397B0;
  if (p == 0) {
    f.mgr = 0;
  } else {
    f.impl.f = p;
    f.mgr = &f.impl;
    f.impl.vt = lbl_82196E7C;
  }
  fn_82517C10(lbl_83282840, &s, 10, 24, fn_82238AC0, fn_8251C5A0, fn_82238B78, fn_82238C38, &f);
  fn_82359C18(&f);
  lbl_83282840[20] = 4;
  r = fn_82518120();
  fn_82518248(r, 4, lbl_83282840);
  if (s.cap >= 16) {
    fn_8265CA20(s.u.ptr);
  }
  s.size = 0;
  s.cap = 15;
  s.u.buf[0] = 0;
  atexit(fn_8313A418);
}
