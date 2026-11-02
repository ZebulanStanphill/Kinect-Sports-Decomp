typedef struct { unsigned prev; unsigned tag; unsigned val; } Link_82AD3A90;
typedef struct { char pad[0xc]; int m0c; unsigned m10; char pad2[4]; unsigned head; } Ctx_82AD3A90;
extern unsigned fn_82B841E8(void *, Ctx_82AD3A90 *, int, int, int, int);
extern Ctx_82AD3A90 *fn_82ACA920(void *, Ctx_82AD3A90 *, int);
extern unsigned fn_82AD1978(unsigned, Ctx_82AD3A90 *);

static __forceinline void linkInsert(unsigned *h, unsigned r)
{
  Link_82AD3A90 *l = (Link_82AD3A90 *)((r & 0xfffffffe) + 0x24);
  l->prev = *h;
  *(unsigned *)(*h & 0xfffffffe) = (unsigned)l - 0x24;
  l->tag = ((unsigned)h - 0x24) | 1;
  *h = (unsigned)&l->tag;
}

unsigned fn_82AD3A90(void *a, Ctx_82AD3A90 *c, Ctx_82AD3A90 *d)
{
  unsigned r = fn_82B841E8(a, c, 0, 0x42, 1, 1);
  Ctx_82AD3A90 *e;
  e = d->m10 != 0 ? fn_82ACA920(a, d, d->m0c) : d;
  *(unsigned *)(r + 0x2c) = fn_82AD1978(r, e);
  linkInsert(&c->head, r);
  return r;
}
