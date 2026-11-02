typedef struct { unsigned prev; unsigned tag; } Link_82B85EE0;
typedef struct { unsigned : 4; unsigned g : 3; unsigned : 25; } Src_82B85EE0;
typedef struct { unsigned : 15; unsigned f : 3; unsigned : 14; } Dst_82B85EE0;
extern unsigned fn_82B841E8(void *, char *, int, int, int, int);
extern unsigned fn_82AD17B0(void *, void *);
extern unsigned fn_82B4BAA8(void *, void *);
extern unsigned fn_82AD1978(unsigned, unsigned);

static __forceinline void linkInsert(unsigned *h, unsigned r)
{
  Link_82B85EE0 *l = (Link_82B85EE0 *)((r & 0xfffffffe) + 0x24);
  l->prev = *h;
  *(unsigned *)(*h & 0xfffffffe) = (unsigned)l - 0x24;
  l->tag = ((unsigned)h - 0x24) | 1;
  *h = (unsigned)&l->tag;
}

typedef struct { int a, b; } Pair_82B85EE0;
unsigned fn_82B85EE0(void *c, char *heap, void *v1, Pair_82B85EE0 v2)
{
  unsigned r = fn_82B841E8(c, heap, 0, 7, 2, 4);
  *(unsigned *)(r + 0x2c) = fn_82AD1978(r, fn_82AD17B0(c, v1));
  *(unsigned *)(r + 0x30) = fn_82AD1978(r, fn_82B4BAA8(c, &v2));
  ((Dst_82B85EE0 *)(r + 8))->f = (*(Src_82B85EE0 **)(r + 0x2c))->g ? (*(Src_82B85EE0 **)(r + 0x2c))->g : 0;
  linkInsert((unsigned *)(heap + 0x18), r);
  return r;
}
