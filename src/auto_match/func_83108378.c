typedef struct {
  union { char buf[16]; void *ptr; } u;
  unsigned size;
  unsigned cap;
  char alloc;
} Str_83108378;

typedef struct {
  void *vt;
  void (*f)(void);
} Impl_83108378;

typedef struct {
  Impl_83108378 impl;
  int pad[2];
  Impl_83108378 *mgr;
} Fn_83108378;

extern void fn_82230110(Str_83108378 *, const char *);
extern void fn_82517C10(void *, Str_83108378 *, int, int, void (*)(void), void (*)(void), void (*)(void), void (*)(void), Fn_83108378 *);
extern void fn_82359C18(Fn_83108378 *);
extern int fn_82518120(void);
extern void fn_82518248(int, int, void *);
extern void fn_8265CA20(void *);
extern void fn_82241EC8(void);
extern void fn_82241B30(void);
extern void fn_8251C5A0(void);
extern void fn_82241BB0(void);
extern void fn_82241C40(void);
extern void fn_8313A630(void);
extern int atexit(void (*)(void));
extern int lbl_83282B50[];
extern char lbl_82196E7C[];

void fn_83108378(void)
{
  Str_83108378 s;
  Fn_83108378 f;
  int r;
  void (*p)(void);
  fn_82230110(&s, "Table Tennis Controller");
  p = fn_82241EC8;
  if (p == 0) {
    f.mgr = 0;
  } else {
    f.impl.f = p;
    f.mgr = &f.impl;
    f.impl.vt = lbl_82196E7C;
  }
  fn_82517C10(lbl_83282B50, &s, 9, 1, fn_82241B30, fn_8251C5A0, fn_82241BB0, fn_82241C40, &f);
  fn_82359C18(&f);
  lbl_83282B50[20] = 2;
  r = fn_82518120();
  fn_82518248(r, 2, lbl_83282B50);
  if (s.cap >= 16) {
    fn_8265CA20(s.u.ptr);
  }
  s.size = 0;
  s.cap = 15;
  s.u.buf[0] = 0;
  atexit(fn_8313A630);
}
