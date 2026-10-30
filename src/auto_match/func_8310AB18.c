typedef struct {
  union { char buf[16]; void *ptr; } u;
  unsigned size;
  unsigned cap;
  char alloc;
} Str_8310AB18;

typedef struct {
  void *vt;
  void (*f)(void);
} Impl_8310AB18;

typedef struct {
  Impl_8310AB18 impl;
  int pad[2];
  Impl_8310AB18 *mgr;
} Fn_8310AB18;

extern void fn_82230110(Str_8310AB18 *, const char *);
extern void fn_82517C10(void *, Str_8310AB18 *, int, int, void (*)(void), void (*)(void), void (*)(void), void (*)(void), Fn_8310AB18 *);
extern void fn_82359C18(Fn_8310AB18 *);
extern int fn_82518120(void);
extern void fn_82518248(int, int, void *);
extern void fn_8265CA20(void *);
extern void fn_8225A480(void);
extern void fn_82259FF8(void);
extern void fn_8251C5A0(void);
extern void fn_8225A078(void);
extern void fn_8225A0C0(void);
extern void fn_8313B4F0(void);
extern int atexit(void (*)(void));
extern int lbl_83283D80[];
extern char lbl_82196E7C[];

void fn_8310AB18(void)
{
  Str_8310AB18 s;
  Fn_8310AB18 f;
  int r;
  void (*p)(void);
  fn_82230110(&s, "SportsmanAthletics");
  p = fn_8225A480;
  if (p == 0) {
    f.mgr = 0;
  } else {
    f.impl.f = p;
    f.mgr = &f.impl;
    f.impl.vt = lbl_82196E7C;
  }
  fn_82517C10(lbl_83283D80, &s, 10, 24, fn_82259FF8, fn_8251C5A0, fn_8225A078, fn_8225A0C0, &f);
  fn_82359C18(&f);
  lbl_83283D80[20] = 3;
  r = fn_82518120();
  fn_82518248(r, 3, lbl_83283D80);
  if (s.cap >= 16) {
    fn_8265CA20(s.u.ptr);
  }
  s.size = 0;
  s.cap = 15;
  s.u.buf[0] = 0;
  atexit(fn_8313B4F0);
}
