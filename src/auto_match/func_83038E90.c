typedef struct O_83038E90 {
  char pad0[0x184]; void *m184; char pad188[0x50]; int m1d8; char pad1dc[4]; unsigned char m1e0;
} O_83038E90;
extern void fn_82FEFC98(void *);
extern void fn_82FEFCC8(void *);
extern int fn_82FEFF98(O_83038E90 *, int, int);
extern void fn_83032D88(void *);

static __forceinline void Rel_83038E90(void **pp)
{
  void *t = *pp;
  *pp = 0;
  if (t != 0) fn_83032D88(t);
}

int fn_83038E90(O_83038E90 *s, int a, int b)
{
  int r;
  fn_82FEFC98((char *)s - 4);
  s->m1d8 = 0;
  s->m1e0 |= 0x20;
  Rel_83038E90(&s->m184);
  r = fn_82FEFF98(s, a, b);
  fn_82FEFCC8((char *)s - 4);
  return r;
}
