typedef struct {
  union { char buf[16]; void *ptr; } u;
  unsigned size;
  unsigned cap;
  char alloc;
} Str_83109318;

typedef struct {
  int pad[4];
  void *mgr;
} Fn_83109318;

extern void fn_82230110(Str_83109318 *, const char *);
extern void fn_82517C10(void *, Str_83109318 *, int, int, void (*)(void), void (*)(void), void (*)(void), void (*)(void), Fn_83109318 *);
extern void fn_82359C18(Fn_83109318 *);
extern int fn_82518120(void);
extern void fn_82518248(int, int, void *);
extern void fn_8265CA20(void *);
extern void fn_82252BA8(void);
extern void fn_8251C5A0(void);
extern void fn_82252C18(void);
extern void fn_82252CC0(void);
extern void fn_8313AC08(void);
extern int atexit(void (*)(void));
extern int lbl_832831E8[];

void fn_83109318(void)
{
  Str_83109318 s;
  Fn_83109318 f;
  int r;
  fn_82230110(&s, "SportsmanFootball");
  f.mgr = 0;
  fn_82517C10(lbl_832831E8, &s, 0xa, 24, fn_82252BA8, fn_8251C5A0, fn_82252C18, fn_82252CC0, &f);
  fn_82359C18(&f);
  lbl_832831E8[20] = 5;
  r = fn_82518120();
  fn_82518248(r, 5, lbl_832831E8);
  if (s.cap >= 16) {
    fn_8265CA20(s.u.ptr);
  }
  s.size = 0;
  s.cap = 15;
  s.u.buf[0] = 0;
  atexit(fn_8313AC08);
}
