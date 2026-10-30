typedef struct {
  union { char buf[16]; void *ptr; } u;
  unsigned size;
  unsigned cap;
  char alloc;
} Str_83109540;

typedef struct {
  int pad[4];
  void *mgr;
} Fn_83109540;

extern void fn_82230110(Str_83109540 *, const char *);
extern void fn_82517C10(void *, Str_83109540 *, int, int, void (*)(void), void (*)(void), void (*)(void), void (*)(void), Fn_83109540 *);
extern void fn_82359C18(Fn_83109540 *);
extern int fn_82518120(void);
extern void fn_82518248(int, int, void *);
extern void fn_8265CA20(void *);
extern void fn_82252F08(void);
extern void fn_8251C5A0(void);
extern void fn_82257DB8(void);
extern void fn_82257E20(void);
extern void fn_8313AD28(void);
extern int atexit(void (*)(void));
extern int lbl_832832F0[];

void fn_83109540(void)
{
  Str_83109540 s;
  Fn_83109540 f;
  int r;
  fn_82230110(&s, "HumanControlSportFootball");
  f.mgr = 0;
  fn_82517C10(lbl_832832F0, &s, 0xc, 4, fn_82252F08, fn_8251C5A0, fn_82257DB8, fn_82257E20, &f);
  fn_82359C18(&f);
  lbl_832832F0[20] = 5;
  r = fn_82518120();
  fn_82518248(r, 5, lbl_832832F0);
  if (s.cap >= 16) {
    fn_8265CA20(s.u.ptr);
  }
  s.size = 0;
  s.cap = 15;
  s.u.buf[0] = 0;
  atexit(fn_8313AD28);
}
