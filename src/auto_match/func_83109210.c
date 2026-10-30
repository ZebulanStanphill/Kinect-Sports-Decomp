typedef struct {
  union { char buf[16]; void *ptr; } u;
  unsigned size;
  unsigned cap;
  char alloc;
} Str_83109210;

typedef struct {
  void *vt;
  void (*f)(void);
} Impl_83109210;

typedef struct {
  Impl_83109210 impl;
  int pad[2];
  Impl_83109210 *mgr;
} Fn_83109210;

extern void fn_82230110(Str_83109210 *, const char *);
extern void fn_82517C10(void *, Str_83109210 *, int, int, void (*)(void), void (*)(void), void (*)(void), void (*)(void), Fn_83109210 *);
extern void fn_82359C18(Fn_83109210 *);
extern int fn_82518120(void);
extern void fn_82518248(int, int, void *);
extern void fn_8265CA20(void *);
extern void fn_82253158(void);
extern void fn_822529F8(void);
extern void fn_8251C5A0(void);
extern void fn_82252A78(void);
extern void fn_82252AF0(void);
extern void fn_8313ABA8(void);
extern int atexit(void (*)(void));
extern int lbl_83283190[];
extern char lbl_82196E7C[];

void fn_83109210(void)
{
  Str_83109210 s;
  Fn_83109210 f;
  int r;
  void (*p)(void);
  fn_82230110(&s, "Football Controller");
  p = fn_82253158;
  if (p == 0) {
    f.mgr = 0;
  } else {
    f.impl.f = p;
    f.mgr = &f.impl;
    f.impl.vt = lbl_82196E7C;
  }
  fn_82517C10(lbl_83283190, &s, 9, 1, fn_822529F8, fn_8251C5A0, fn_82252A78, fn_82252AF0, &f);
  fn_82359C18(&f);
  lbl_83283190[20] = 5;
  r = fn_82518120();
  fn_82518248(r, 5, lbl_83283190);
  if (s.cap >= 16) {
    fn_8265CA20(s.u.ptr);
  }
  s.size = 0;
  s.cap = 15;
  s.u.buf[0] = 0;
  atexit(fn_8313ABA8);
}
