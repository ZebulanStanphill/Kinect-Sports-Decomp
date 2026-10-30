typedef struct {
  union { char buf[16]; void *ptr; } u;
  unsigned size;
  unsigned cap;
  char alloc;
} Str_831082A0;

typedef struct {
  int pad[4];
  void *mgr;
} Fn_831082A0;

extern void fn_82230110(Str_831082A0 *, const char *);
extern void fn_82517C10(void *, Str_831082A0 *, int, int, void (*)(void), void (*)(void), void (*)(void), void (*)(void), Fn_831082A0 *);
extern void fn_82359C18(Fn_831082A0 *);
extern int fn_82518120(void);
extern void fn_82518248(int, int, void *);
extern void fn_8265CA20(void *);
extern void fn_82241AB8(void);
extern void fn_8251C5A0(void);
extern void fn_82257DB8(void);
extern void fn_82257E20(void);
extern void fn_8313A5D0(void);
extern int atexit(void (*)(void));
extern int lbl_83282AF8[];

void fn_831082A0(void)
{
  Str_831082A0 s;
  Fn_831082A0 f;
  int r;
  fn_82230110(&s, "HumanControlSportTableTennis");
  f.mgr = 0;
  fn_82517C10(lbl_83282AF8, &s, 0xb, 4, fn_82241AB8, fn_8251C5A0, fn_82257DB8, fn_82257E20, &f);
  fn_82359C18(&f);
  lbl_83282AF8[20] = 2;
  r = fn_82518120();
  fn_82518248(r, 2, lbl_83282AF8);
  if (s.cap >= 16) {
    fn_8265CA20(s.u.ptr);
  }
  s.size = 0;
  s.cap = 15;
  s.u.buf[0] = 0;
  atexit(fn_8313A5D0);
}
