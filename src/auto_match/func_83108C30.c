typedef struct {
  union { char buf[16]; void *ptr; } u;
  unsigned size;
  unsigned cap;
  char alloc;
} Str_83108C30;

typedef struct {
  int pad[4];
  void *mgr;
} Fn_83108C30;

extern void fn_82230110(Str_83108C30 *, const char *);
extern void fn_82517C10(void *, Str_83108C30 *, int, int, void (*)(void), void (*)(void), void (*)(void), void (*)(void), Fn_83108C30 *);
extern void fn_82359C18(Fn_83108C30 *);
extern int fn_82518120(void);
extern void fn_82518248(int, int, void *);
extern void fn_8265CA20(void *);
extern void fn_8224F040(void);
extern void fn_8251C5A0(void);
extern void fn_8224F0B0(void);
extern void fn_8224F160(void);
extern void fn_8313A9A0(void);
extern int atexit(void (*)(void));
extern int lbl_83282E90[];

void fn_83108C30(void)
{
  Str_83108C30 s;
  Fn_83108C30 f;
  int r;
  fn_82230110(&s, "OlympusVoicePlayerHack");
  f.mgr = 0;
  fn_82517C10(lbl_83282E90, &s, 0x2, 1, fn_8224F040, fn_8251C5A0, fn_8224F0B0, fn_8224F160, &f);
  fn_82359C18(&f);
  lbl_83282E90[20] = 1;
  r = fn_82518120();
  fn_82518248(r, 1, lbl_83282E90);
  if (s.cap >= 16) {
    fn_8265CA20(s.u.ptr);
  }
  s.size = 0;
  s.cap = 15;
  s.u.buf[0] = 0;
  atexit(fn_8313A9A0);
}
