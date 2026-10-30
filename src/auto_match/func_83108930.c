typedef struct {
  union { char buf[16]; void *ptr; } u;
  unsigned size;
  unsigned cap;
  char alloc;
} Str_83108930;

typedef struct {
  int pad[4];
  void *mgr;
} Fn_83108930;

extern void fn_82230110(Str_83108930 *, const char *);
extern void fn_82517C10(void *, Str_83108930 *, int, int, void (*)(void), void (*)(void), void (*)(void), void (*)(void), Fn_83108930 *);
extern void fn_82359C18(Fn_83108930 *);
extern int fn_82518120(void);
extern void fn_82518248(int, int, void *);
extern void fn_8265CA20(void *);
extern void fn_82246100(void);
extern void fn_8251C5A0(void);
extern void fn_82246148(void);
extern void fn_82246190(void);
extern void fn_8313A8A8(void);
extern int atexit(void (*)(void));
extern int lbl_83282D98[];

void fn_83108930(void)
{
  Str_83108930 s;
  Fn_83108930 f;
  int r;
  fn_82230110(&s, "Olympus Session Net Obj");
  f.mgr = 0;
  fn_82517C10(lbl_83282D98, &s, 0x6, 1, fn_82246100, fn_8251C5A0, fn_82246148, fn_82246190, &f);
  fn_82359C18(&f);
  lbl_83282D98[20] = 1;
  r = fn_82518120();
  fn_82518248(r, 1, lbl_83282D98);
  if (s.cap >= 16) {
    fn_8265CA20(s.u.ptr);
  }
  s.size = 0;
  s.cap = 15;
  s.u.buf[0] = 0;
  atexit(fn_8313A8A8);
}
