typedef struct Obj_82AEBA50 {
  int pad[3];
  int f0c;
  unsigned int *f10;
} Obj_82AEBA50;
typedef struct Link_82AEBA50 {
  unsigned prev;
  unsigned tag;
} Link_82AEBA50;
extern unsigned int fn_82ACA920(void *, void *, int);
extern unsigned int fn_82AD1978(unsigned int, void *);
extern unsigned int fn_82B841E8(void *, void *, int, int, int, int);

static __forceinline void linkInsert(unsigned *h, unsigned r)
{
  Link_82AEBA50 *l = (Link_82AEBA50 *)((r & ~1u) + 0x24);
  l->prev = *h;
  *(unsigned *)(*h & ~1u) = (unsigned)l - 0x24;
  l->tag = ((unsigned)h - 0x24) | 1;
  *h = (unsigned)&l->tag;
}

unsigned int fn_82AEBA50(void *a, void *b, unsigned int *list, Obj_82AEBA50 *o)
{
  unsigned int r;
  void *x;

  r = fn_82B841E8(a, b, 0, 0x66, 1, 4);
  x = o->f10 != 0 ? (void *)fn_82ACA920(a, o, o->f0c) : o;
  *(unsigned int *)(r + 0x2c) = fn_82AD1978(r, x);
  if (list != 0) {
    linkInsert(list, r);
  }
  return r;
}
