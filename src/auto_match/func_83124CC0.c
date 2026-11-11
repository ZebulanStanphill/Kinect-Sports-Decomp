typedef struct { int w[5]; } Fn14_83124CC0;
typedef struct { union { char buf[16]; char *p; } u; unsigned int size; unsigned int cap; int al; } Str_83124CC0;
typedef struct { char pad[0x50]; int x; } Obj_83124CC0;
extern Obj_83124CC0 lbl_83296048;
extern void fn_82230110(Str_83124CC0 *, const char *);
extern void fn_82517C10(void *, Str_83124CC0 *, int, int, void *, void *, void *, void *, Fn14_83124CC0 *);
extern void fn_82359C18(Fn14_83124CC0 *);
extern void fn_8251C508(void);
extern void fn_8251C5A0(void);
extern void fn_8251C5C0(void);
extern void fn_8251C628(void);
extern int fn_82518120(void);
extern void fn_82518248(int, int, void *);
extern void fn_8265CA20(void *);
extern void fn_8313F390(void);
extern int atexit(void (*)(void));

void fn_83124CC0(void)
{
  Fn14_83124CC0 f;
  Str_83124CC0 s;
  fn_82230110(&s, "Player");
  f.w[4] = 0;
  fn_82517C10(&lbl_83296048, &s, 1, 50, (void *)fn_8251C508, (void *)fn_8251C5A0, (void *)fn_8251C5C0, (void *)fn_8251C628, &f);
  fn_82359C18(&f);
  lbl_83296048.x = 0;
  fn_82518248(fn_82518120(), 0, &lbl_83296048);
  if (s.cap >= 0x10)
    fn_8265CA20(s.u.p);
  s.size = 0;
  s.u.buf[0] = 0;
  s.cap = 0xf;
  atexit(fn_8313F390);
}
