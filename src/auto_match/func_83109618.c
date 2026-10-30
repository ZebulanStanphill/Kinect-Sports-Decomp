typedef struct {
  union { char buf[16]; void *ptr; } u;
  unsigned size;
  unsigned cap;
  char alloc;
} Str_83109618;

typedef struct {
  int pad[4];
  void *mgr;
} Fn_83109618;

extern void fn_82230110(Str_83109618 *, const char *);
extern void fn_82517C10(void *, Str_83109618 *, int, int, void (*)(void), void (*)(void), void (*)(void), void (*)(void), Fn_83109618 *);
extern void fn_82359C18(Fn_83109618 *);
extern int fn_82518120(void);
extern void fn_82518248(int, int, void *);
extern void fn_8265CA20(void *);
extern void fn_82252F80(void);
extern void fn_8251C5A0(void);
extern void fn_82252FF0(void);
extern void fn_82253098(void);
extern void fn_8313AD88(void);
extern int atexit(void (*)(void));
extern int lbl_83283348[];

void fn_83109618(void)
{
  Str_83109618 s;
  Fn_83109618 f;
  int r;
  fn_82230110(&s, "Football Team");
  f.mgr = 0;
  fn_82517C10(lbl_83283348, &s, 0xb, 2, fn_82252F80, fn_8251C5A0, fn_82252FF0, fn_82253098, &f);
  fn_82359C18(&f);
  lbl_83283348[20] = 5;
  r = fn_82518120();
  fn_82518248(r, 5, lbl_83283348);
  if (s.cap >= 16) {
    fn_8265CA20(s.u.ptr);
  }
  s.size = 0;
  s.cap = 15;
  s.u.buf[0] = 0;
  atexit(fn_8313AD88);
}
