typedef struct {
  union { char buf[16]; void *ptr; } u;
  unsigned size;
  unsigned cap;
  char alloc;
} Str_831093F0;

typedef struct {
  int pad[4];
  void *mgr;
} Fn_831093F0;

extern void fn_82230110(Str_831093F0 *, const char *);
extern void fn_82517C10(void *, Str_831093F0 *, int, int, void (*)(void), void (*)(void), void (*)(void), void (*)(void), Fn_831093F0 *);
extern void fn_82359C18(Fn_831093F0 *);
extern int fn_82518120(void);
extern void fn_82518248(int, int, void *);
extern void fn_8265CA20(void *);
extern void fn_82252D78(void);
extern void fn_8251C5A0(void);
extern void fn_82252E20(void);
extern void fn_82252E68(void);
extern void fn_8313AC68(void);
extern int atexit(void (*)(void));
extern int lbl_83283240[];

void fn_831093F0(void)
{
  Str_831093F0 s;
  Fn_831093F0 f;
  int r;
  fn_82230110(&s, "HumanControl");
  f.mgr = 0;
  fn_82517C10(lbl_83283240, &s, 0x6, 4, fn_82252D78, fn_8251C5A0, fn_82252E20, fn_82252E68, &f);
  fn_82359C18(&f);
  lbl_83283240[20] = 5;
  r = fn_82518120();
  fn_82518248(r, 5, lbl_83283240);
  if (s.cap >= 16) {
    fn_8265CA20(s.u.ptr);
  }
  s.size = 0;
  s.cap = 15;
  s.u.buf[0] = 0;
  atexit(fn_8313AC68);
}
