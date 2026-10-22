typedef struct Lists {
  int f0;
  int f4;
  unsigned int n1;
  unsigned int n2;
  int f10;
  void **a1;
  void **a2;
} Lists;

typedef struct Info { char pad[0x1c]; int count; } Info;

typedef struct Ctx {
  int f0;
  Info *info;
  Lists *lists;
  int fc;
  int f10;
  int f14;
  void *dst;
} Ctx;

extern void fn_829639F0(void *);
extern void fn_82964180(void *);
extern void fn_82BA02A8(void *);
extern void *memcpy(void *, const void *, unsigned int);

int fn_82904138(Ctx *c, unsigned int n1, unsigned int n2, void *src)
{
  unsigned int i;
  void *p;

  for (i = n1; i < c->lists->n1; i++) {
    p = c->lists->a1[i];
    if (p != 0) {
      fn_82BA02A8(p);
      fn_82964180(p);
    }
    c->lists->a1[i] = 0;
  }
  c->lists->n1 = n1;
  for (i = n2; i < c->lists->n2; i++) {
    p = c->lists->a2[i];
    if (p != 0) {
      fn_82BA02A8(p);
      fn_829639F0(p);
    }
    c->lists->a2[i] = 0;
  }
  c->lists->n2 = n2;
  memcpy(c->dst, src, c->info->count * 4);
  return 0;
}
