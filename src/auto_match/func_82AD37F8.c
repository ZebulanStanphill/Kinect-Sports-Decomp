typedef struct { unsigned prev; unsigned tag; unsigned val; } Link_82AD37F8;
typedef struct { char pad[0xc]; int m0c; unsigned m10; } Ctx_82AD37F8;
typedef struct { unsigned : 4; unsigned g : 3; unsigned : 25; } Src_82AD37F8;
typedef struct { unsigned : 15; unsigned f : 3; unsigned : 14; } Dst_82AD37F8;
extern unsigned fn_82B841E8(void *, void *, int, int, int, int);
extern Ctx_82AD37F8 *fn_82ACA920(void *, Ctx_82AD37F8 *, int);
extern unsigned fn_82AD1978(unsigned, Ctx_82AD37F8 *);

static __forceinline void linkInsert(unsigned *h, unsigned r)
{
  Link_82AD37F8 *l = (Link_82AD37F8 *)((r & 0xfffffffe) + 0x24);
  l->prev = *h;
  *(unsigned *)(*h & 0xfffffffe) = (unsigned)l - 0x24;
  l->tag = ((unsigned)h - 0x24) | 1;
  *h = (unsigned)&l->tag;
}

unsigned fn_82AD37F8(void *a, void *b, unsigned *h, Ctx_82AD37F8 *c1, Ctx_82AD37F8 *c2, Ctx_82AD37F8 *c3)
{
  unsigned r = fn_82B841E8(a, b, 0, 0xe, 3, 4);
  Ctx_82AD37F8 *e;
  e = c1->m10 != 0 ? fn_82ACA920(a, c1, c1->m0c) : c1;
  *(unsigned *)(r + 0x2c) = fn_82AD1978(r, e);
  e = c2->m10 != 0 ? fn_82ACA920(a, c2, c2->m0c) : c2;
  *(unsigned *)(r + 0x30) = fn_82AD1978(r, e);
  e = c3->m10 != 0 ? fn_82ACA920(a, c3, c3->m0c) : c3;
  *(unsigned *)(r + 0x34) = fn_82AD1978(r, e);
  ((Dst_82AD37F8 *)(r + 8))->f = (*(Src_82AD37F8 **)(r + 0x2c))->g ? (*(Src_82AD37F8 **)(r + 0x2c))->g : 0;
  if (h != 0) {
    linkInsert(h, r);
  }
  return r;
}
