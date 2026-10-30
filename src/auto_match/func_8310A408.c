typedef struct {
  union { char buf[16]; void *ptr; } u;
  unsigned size;
  unsigned cap;
  char alloc;
} Str_8310A408;

typedef struct {
  int pad[4];
  void *mgr;
} Fn_8310A408;

extern void fn_82230110(Str_8310A408 *, const char *);
extern void fn_82517C10(void *, Str_8310A408 *, int, int, void (*)(void), void (*)(void), void (*)(void), void (*)(void), Fn_8310A408 *);
extern void fn_82359C18(Fn_8310A408 *);
extern int fn_82518120(void);
extern void fn_82518248(int, int, void *);
extern void fn_8265CA20(void *);
extern void fn_82257EF0(void);
extern void fn_8251C5A0(void);
extern void fn_82257F68(void);
extern void fn_82257FE0(void);
extern void fn_8313B278(void);
extern int atexit(void (*)(void));
extern int lbl_83283A18[];

void fn_8310A408(void)
{
  Str_8310A408 s;
  Fn_8310A408 f;
  int r;
  fn_82230110(&s, "Bowling Controller");
  f.mgr = 0;
  fn_82517C10(lbl_83283A18, &s, 0x9, 1, fn_82257EF0, fn_8251C5A0, fn_82257F68, fn_82257FE0, &f);
  fn_82359C18(&f);
  lbl_83283A18[20] = 7;
  r = fn_82518120();
  fn_82518248(r, 7, lbl_83283A18);
  if (s.cap >= 16) {
    fn_8265CA20(s.u.ptr);
  }
  s.size = 0;
  s.cap = 15;
  s.u.buf[0] = 0;
  atexit(fn_8313B278);
}
