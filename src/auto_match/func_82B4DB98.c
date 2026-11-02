typedef struct { unsigned prev; unsigned tag; } Link_82B4DB98;
typedef struct { unsigned : 4; unsigned g : 3; unsigned : 25; } Src_82B4DB98;
typedef struct { unsigned : 15; unsigned f : 3; unsigned : 14; } Dst_82B4DB98;
typedef struct { char pad[0xc]; int m0c; unsigned m10; } Val_82B4DB98;
typedef struct { int a, b; } Pair_82B4DB98;
extern unsigned fn_82B841E8(void *, void *, int, int, int, int);
extern Val_82B4DB98 *fn_82ACA920(void *, Val_82B4DB98 *, int);
extern unsigned fn_82AD17B0(void *, void *);
extern unsigned fn_82B4BAA8(void *, void *);
extern unsigned fn_82AD1978(unsigned, void *);

static __forceinline void linkInsert(unsigned *h, unsigned r)
{
  Link_82B4DB98 *l = (Link_82B4DB98 *)((r & 0xfffffffe) + 0x24);
  l->prev = *h;
  *(unsigned *)(*h & 0xfffffffe) = (unsigned)l - 0x24;
  l->tag = ((unsigned)h - 0x24) | 1;
  *h = (unsigned)&l->tag;
}

unsigned fn_82B4DB98(char *c, void *v1, Pair_82B4DB98 v2, Pair_82B4DB98 v3)
{
  unsigned r = fn_82B841E8(c, *(char **)(c + 0x234), 0, 0xd, 3, 4);
  *(unsigned *)(r + 0x2c) = fn_82AD1978(r, fn_82AD17B0(c, v1));
  *(unsigned *)(r + 0x30) = fn_82AD1978(r, fn_82B4BAA8(c, &v2));
  *(unsigned *)(r + 0x34) = fn_82AD1978(r, fn_82B4BAA8(c, &v3));
  ((Dst_82B4DB98 *)(r + 8))->f = (*(Src_82B4DB98 **)(r + 0x2c))->g ? (*(Src_82B4DB98 **)(r + 0x2c))->g : 0;
  linkInsert((unsigned *)(*(char **)(c + 0x234) + 0x18), r);
  return r;
}
