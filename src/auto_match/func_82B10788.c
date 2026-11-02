typedef struct { unsigned prev; unsigned tag; unsigned val; } Link_82B10788;
typedef struct { unsigned : 4; unsigned g : 3; unsigned : 25; } Src_82B10788;
typedef struct { unsigned : 15; unsigned f : 3; unsigned : 14; } Dst_82B10788;
extern unsigned fn_82B841E8(void *, void *, int, int, int, int);
extern unsigned fn_82AD17B0(void *, void *);
extern unsigned fn_82AD1978(unsigned, unsigned);

static __forceinline void linkInsert(unsigned *h, unsigned r)
{
  Link_82B10788 *l = (Link_82B10788 *)((r & 0xfffffffe) + 0x24);
  l->prev = *h;
  *(unsigned *)(*h & 0xfffffffe) = (unsigned)l - 0x24;
  l->tag = ((unsigned)h - 0x24) | 1;
  *h = (unsigned)&l->tag;
}

unsigned fn_82B10788(void *a, void *b, unsigned *h, void *v1, void *v2)
{
  unsigned r = fn_82B841E8(a, b, 0, 3, 2, 4);
  *(unsigned *)(r + 0x2c) = fn_82AD1978(r, fn_82AD17B0(a, v1));
  *(unsigned *)(r + 0x30) = fn_82AD1978(r, fn_82AD17B0(a, v2));
  ((Dst_82B10788 *)(r + 8))->f = (*(Src_82B10788 **)(r + 0x2c))->g ? (*(Src_82B10788 **)(r + 0x2c))->g : 0;
  if (h != 0) {
    linkInsert(h, r);
  }
  return r;
}
