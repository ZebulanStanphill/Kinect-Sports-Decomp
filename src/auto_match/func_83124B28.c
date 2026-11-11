typedef struct { int w[5]; } Fn14_83124B28;
typedef struct { union { char buf[16]; char *p; } u; unsigned int size; unsigned int cap; int al; } Str_83124B28;
typedef struct { char pad[0x50]; int x; } Obj_83124B28;
extern Obj_83124B28 lbl_83295F98;
extern void fn_82230110(Str_83124B28 *, const char *);
extern void fn_82517C10(void *, Str_83124B28 *, int, int, void *, void *, void *, void *, Fn14_83124B28 *);
extern void fn_82359C18(Fn14_83124B28 *);
extern void fn_82519B48(void);
extern void fn_8251C5A0(void);
extern void fn_82519B90(void);
extern void fn_82519BF8(void);
extern int fn_82518120(void);
extern void fn_82518248(int, int, void *);
extern void fn_8265CA20(void *);
extern void fn_8313F250(void);
extern int atexit(void (*)(void));

void fn_83124B28(void)
{
  Fn14_83124B28 f;
  Str_83124B28 s;
  fn_82230110(&s, "Live::NetObj::LiveNetObj_c");
  f.w[4] = 0;
  fn_82517C10(&lbl_83295F98, &s, 3, 1, (void *)fn_82519B48, (void *)fn_8251C5A0, (void *)fn_82519B90, (void *)fn_82519BF8, &f);
  fn_82359C18(&f);
  lbl_83295F98.x = 0;
  fn_82518248(fn_82518120(), 0, &lbl_83295F98);
  if (s.cap >= 0x10)
    fn_8265CA20(s.u.p);
  s.size = 0;
  s.u.buf[0] = 0;
  s.cap = 0xf;
  atexit(fn_8313F250);
}
