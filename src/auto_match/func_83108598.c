typedef struct {
  union { char buf[16]; void *ptr; } u;
  unsigned size;
  unsigned cap;
  char alloc;
} Str_83108598;

typedef struct {
  int pad[4];
  void *mgr;
} Fn_83108598;

extern void fn_82230110(Str_83108598 *, const char *);
extern void fn_82517C10(void *, Str_83108598 *, int, int, void (*)(void), void (*)(void), void (*)(void), void (*)(void), Fn_83108598 *);
extern void fn_82359C18(Fn_83108598 *);
extern int fn_82518120(void);
extern void fn_82518248(int, int, void *);
extern void fn_8265CA20(void *);
extern void fn_82243370(void);
extern void fn_8251C5A0(void);
extern void fn_82243400(void);
extern void fn_822434A8(void);
extern void fn_8313A708(void);
extern int atexit(void (*)(void));
extern int lbl_83282C20[];

void fn_83108598(void)
{
  Str_83108598 s;
  Fn_83108598 f;
  int r;
  fn_82230110(&s, "EnterSport");
  f.mgr = 0;
  fn_82517C10(lbl_83282C20, &s, 0x7, 1, fn_82243370, fn_8251C5A0, fn_82243400, fn_822434A8, &f);
  fn_82359C18(&f);
  lbl_83282C20[20] = 1;
  r = fn_82518120();
  fn_82518248(r, 1, lbl_83282C20);
  if (s.cap >= 16) {
    fn_8265CA20(s.u.ptr);
  }
  s.size = 0;
  s.cap = 15;
  s.u.buf[0] = 0;
  atexit(fn_8313A708);
}
