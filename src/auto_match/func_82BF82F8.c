extern void fn_82BE8CE0(void *);
extern void *fn_82BEC810(const char *);
extern char lbl_820EBDA8[];

typedef struct {
  void *vtbl;
  int pad4;
  unsigned int m8;
  int pad_c;
  unsigned __int64 m10;
  unsigned int m18, m1c, m20, m24, m28;
  void *m2c;
  void *m30;
} Obj_82BF82F8;

Obj_82BF82F8 *fn_82BF82F8(Obj_82BF82F8 *p, unsigned int a, unsigned __int64 b, unsigned int c,
                          unsigned int d, unsigned int e, unsigned int f, unsigned int g,
                          const char *s1, const char *s2)
{
  fn_82BE8CE0(p);
  p->m8 = a;
  p->m10 = b;
  p->m18 = c;
  p->m1c = d;
  p->vtbl = lbl_820EBDA8;
  p->m20 = e;
  p->m24 = f;
  p->m28 = g;
  p->m2c = 0;
  p->m30 = 0;
  if (s1 != 0 && *s1 != 0) {
    p->m2c = fn_82BEC810(s1);
  }
  if (s2 != 0 && *s2 != 0) {
    p->m30 = fn_82BEC810(s2);
  }
  return p;
}
