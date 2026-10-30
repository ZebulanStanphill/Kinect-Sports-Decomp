typedef struct {
  union { char buf[16]; void *ptr; } u;
  unsigned size;
  unsigned cap;
  char alloc;
} Str_83107C68;

typedef struct {
  void *vt;
  void (*f)(void);
} Impl_83107C68;

typedef struct {
  Impl_83107C68 impl;
  int pad[2];
  Impl_83107C68 *mgr;
} Fn_83107C68;

extern void fn_82230110(Str_83107C68 *, const char *);
extern void fn_82517C10(void *, Str_83107C68 *, int, int, void (*)(void), void (*)(void), void (*)(void), void (*)(void), Fn_83107C68 *);
extern void fn_82359C18(Fn_83107C68 *);
extern int fn_82518120(void);
extern void fn_82518248(int, int, void *);
extern void fn_8265CA20(void *);
extern void fn_82239670(void);
extern void fn_822388D0(void);
extern void fn_8251C5A0(void);
extern void fn_82238958(void);
extern void fn_822389F0(void);
extern void fn_8313A3B8(void);
extern int atexit(void (*)(void));
extern int lbl_832827E8[];
extern char lbl_82196E7C[];

void fn_83107C68(void)
{
  Str_83107C68 s;
  Fn_83107C68 f;
  int r;
  void (*p)(void);
  fn_82230110(&s, "Volleyball Controller");
  p = fn_82239670;
  if (p == 0) {
    f.mgr = 0;
  } else {
    f.impl.f = p;
    f.mgr = &f.impl;
    f.impl.vt = lbl_82196E7C;
  }
  fn_82517C10(lbl_832827E8, &s, 9, 1, fn_822388D0, fn_8251C5A0, fn_82238958, fn_822389F0, &f);
  fn_82359C18(&f);
  lbl_832827E8[20] = 4;
  r = fn_82518120();
  fn_82518248(r, 4, lbl_832827E8);
  if (s.cap >= 16) {
    fn_8265CA20(s.u.ptr);
  }
  s.size = 0;
  s.cap = 15;
  s.u.buf[0] = 0;
  atexit(fn_8313A3B8);
}
