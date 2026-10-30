typedef struct {
  union { char buf[16]; void *ptr; } u;
  unsigned size;
  unsigned cap;
  char alloc;
} Str_8310A300;

typedef struct {
  void *vt;
  void (*f)(void);
} Impl_8310A300;

typedef struct {
  Impl_8310A300 impl;
  int pad[2];
  Impl_8310A300 *mgr;
} Fn_8310A300;

extern void fn_82230110(Str_8310A300 *, const char *);
extern void fn_82517C10(void *, Str_8310A300 *, int, int, void (*)(void), void (*)(void), void (*)(void), void (*)(void), Fn_8310A300 *);
extern void fn_82359C18(Fn_8310A300 *);
extern int fn_82518120(void);
extern void fn_82518248(int, int, void *);
extern void fn_8265CA20(void *);
extern void fn_82258360(void);
extern void fn_82257D48(void);
extern void fn_8251C5A0(void);
extern void fn_82257DB8(void);
extern void fn_82257E20(void);
extern void fn_8313B218(void);
extern int atexit(void (*)(void));
extern int lbl_832839C0[];
extern char lbl_82196E7C[];

void fn_8310A300(void)
{
  Str_8310A300 s;
  Fn_8310A300 f;
  int r;
  void (*p)(void);
  fn_82230110(&s, "HumanControlSportBowling");
  p = fn_82258360;
  if (p == 0) {
    f.mgr = 0;
  } else {
    f.impl.f = p;
    f.mgr = &f.impl;
    f.impl.vt = lbl_82196E7C;
  }
  fn_82517C10(lbl_832839C0, &s, 11, 4, fn_82257D48, fn_8251C5A0, fn_82257DB8, fn_82257E20, &f);
  fn_82359C18(&f);
  lbl_832839C0[20] = 7;
  r = fn_82518120();
  fn_82518248(r, 7, lbl_832839C0);
  if (s.cap >= 16) {
    fn_8265CA20(s.u.ptr);
  }
  s.size = 0;
  s.cap = 15;
  s.u.buf[0] = 0;
  atexit(fn_8313B218);
}
