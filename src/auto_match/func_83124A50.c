typedef struct { int w[5]; } Fn14_83124A50;
typedef struct { union { char buf[16]; char *p; } u; unsigned int size; unsigned int cap; int al; } Str_83124A50;
typedef struct { char pad[0x50]; int x; } Obj_83124A50;
extern Obj_83124A50 lbl_83295F40;
extern void fn_82230110(Str_83124A50 *, const char *);
extern void fn_82517C10(void *, Str_83124A50 *, int, int, void *, void *, void *, void *, Fn14_83124A50 *);
extern void fn_82359C18(Fn14_83124A50 *);
extern void fn_825176E0(void);
extern void fn_8251C5A0(void);
extern void fn_82517768(void);
extern void fn_825177E8(void);
extern int fn_82518120(void);
extern void fn_82518248(int, int, void *);
extern void fn_8265CA20(void *);
extern void fn_8313F1F0(void);
extern int atexit(void (*)(void));

void fn_83124A50(void)
{
  Fn14_83124A50 f;
  Str_83124A50 s;
  fn_82230110(&s, "Global");
  f.w[4] = 0;
  fn_82517C10(&lbl_83295F40, &s, 0, 1, (void *)fn_825176E0, (void *)fn_8251C5A0, (void *)fn_82517768, (void *)fn_825177E8, &f);
  fn_82359C18(&f);
  lbl_83295F40.x = 0;
  fn_82518248(fn_82518120(), 0, &lbl_83295F40);
  if (s.cap >= 0x10)
    fn_8265CA20(s.u.p);
  s.size = 0;
  s.u.buf[0] = 0;
  s.cap = 0xf;
  atexit(fn_8313F1F0);
}
