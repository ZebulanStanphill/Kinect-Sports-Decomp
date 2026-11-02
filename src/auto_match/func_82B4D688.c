typedef struct { unsigned prev; unsigned tag; } Link_func_82B4D688;
typedef struct { unsigned : 4; unsigned g : 3; unsigned : 25; } Src_func_82B4D688;
typedef struct { unsigned : 15; unsigned f : 3; unsigned : 14; } Dst_func_82B4D688;
extern unsigned fn_82B841E8(void *, void *, int, int, int, int);
extern unsigned fn_82AD17B0(void *, void *);
extern unsigned fn_82B4BAA8(void *, void *);
extern unsigned fn_82AD1978(unsigned, unsigned);

static __forceinline void linkInsert(unsigned *h, unsigned r)
{
  Link_func_82B4D688 *l = (Link_func_82B4D688 *)((r & 0xfffffffe) + 0x24);
  l->prev = *h;
  *(unsigned *)(*h & 0xfffffffe) = (unsigned)l - 0x24;
  l->tag = ((unsigned)h - 0x24) | 1;
  *h = (unsigned)&l->tag;
}

unsigned fn_82B4D688(char *c, void *v1, void *v2)
{
  unsigned r = fn_82B841E8(c, *(char **)(c + 0x234), 0, 1, 2, 4);
  *(unsigned *)(r + 0x2c) = fn_82AD1978(r, fn_82AD17B0(c, v1));
  *(unsigned *)(r + 0x30) = fn_82AD1978(r, fn_82B4BAA8(c, v2));
  ((Dst_func_82B4D688 *)(r + 8))->f = (*(Src_func_82B4D688 **)(r + 0x2c))->g ? (*(Src_func_82B4D688 **)(r + 0x2c))->g : 0;
  linkInsert((unsigned *)(*(char **)(c + 0x234) + 0x18), r);
  return r;
}
