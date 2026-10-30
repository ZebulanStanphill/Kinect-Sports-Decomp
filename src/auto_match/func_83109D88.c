typedef struct {
  union { char buf[16]; void *ptr; } u;
  unsigned size;
  unsigned cap;
  char alloc;
} Str_83109D88;

typedef struct {
  int pad[4];
  void *mgr;
} Fn_83109D88;

extern void fn_82230110(Str_83109D88 *, const char *);
extern void fn_82517C10(void *, Str_83109D88 *, int, int, void (*)(void), void (*)(void), void (*)(void), void (*)(void), Fn_83109D88 *);
extern void fn_82359C18(Fn_83109D88 *);
extern int fn_82518120(void);
extern void fn_82518248(int, int, void *);
extern void fn_8265CA20(void *);
extern void fn_82252D78(void);
extern void fn_8251C5A0(void);
extern void fn_82252E20(void);
extern void fn_82252E68(void);
extern void fn_8313B000(void);
extern int atexit(void (*)(void));
extern int lbl_832836B0[];

void fn_83109D88(void)
{
  Str_83109D88 s;
  Fn_83109D88 f;
  int r;
  fn_82230110(&s, "HumanControl");
  f.mgr = 0;
  fn_82517C10(lbl_832836B0, &s, 0x6, 4, fn_82252D78, fn_8251C5A0, fn_82252E20, fn_82252E68, &f);
  fn_82359C18(&f);
  lbl_832836B0[20] = 6;
  r = fn_82518120();
  fn_82518248(r, 6, lbl_832836B0);
  if (s.cap >= 16) {
    fn_8265CA20(s.u.ptr);
  }
  s.size = 0;
  s.cap = 15;
  s.u.buf[0] = 0;
  atexit(fn_8313B000);
}
