typedef struct { unsigned prev; unsigned tag; unsigned val; } Link_82B85948;
typedef struct { char pad[0xc]; int m0c; unsigned m10; char pad2[4]; unsigned head; } Ctx_82B85948;
extern unsigned fn_82B841E8(void *, Ctx_82B85948 *, int, int, int, int);
extern Ctx_82B85948 *fn_82ACA920(void *, Ctx_82B85948 *, int);
extern unsigned fn_82AD1978(unsigned, Ctx_82B85948 *);

static __forceinline void linkInsert(unsigned *h, unsigned r)
{
  Link_82B85948 *l = (Link_82B85948 *)((r & 0xfffffffe) + 0x24);
  l->prev = *h;
  *(unsigned *)(*h & 0xfffffffe) = (unsigned)l - 0x24;
  l->tag = ((unsigned)h - 0x24) | 1;
  *h = (unsigned)&l->tag;
}

unsigned fn_82B85948(void *a, Ctx_82B85948 *c, Ctx_82B85948 *d)
{
  unsigned r = fn_82B841E8(a, c, 0, 0x31, 1, 1);
  Ctx_82B85948 *e;
  e = d->m10 != 0 ? fn_82ACA920(a, d, d->m0c) : d;
  *(unsigned *)(r + 0x2c) = fn_82AD1978(r, e);
  linkInsert(&c->head, r);
  return r;
}
