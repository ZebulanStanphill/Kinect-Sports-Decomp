typedef struct { unsigned prev; unsigned tag; } Link_82B493E8;
typedef struct { unsigned : 4; unsigned g : 3; unsigned : 25; } Src_82B493E8;
typedef struct { unsigned : 15; unsigned f : 3; unsigned : 14; } Dst_82B493E8;
typedef struct { char pad[0xc]; int m0c; unsigned m10; } Val_82B493E8;
extern unsigned fn_82B841E8(void *, void *, int, int, int, int);
extern Val_82B493E8 *fn_82ACA920(void *, Val_82B493E8 *, int);
extern unsigned fn_82AD17B0(void *, void *);
extern unsigned fn_82B4BAA8(void *, void *);
extern unsigned fn_82AD1978(unsigned, void *);

static __forceinline void linkInsert(unsigned *h, unsigned r)
{
  Link_82B493E8 *l = (Link_82B493E8 *)((r & 0xfffffffe) + 0x24);
  l->prev = *h;
  *(unsigned *)(*h & 0xfffffffe) = (unsigned)l - 0x24;
  l->tag = ((unsigned)h - 0x24) | 1;
  *h = (unsigned)&l->tag;
}

unsigned fn_82B493E8(char *c, void *v1, Val_82B493E8 *v2)
{
  unsigned r = fn_82B841E8(c, *(char **)(c + 0x234), 0, 7, 2, 4);
  *(unsigned *)(r + 0x2c) = fn_82AD1978(r, fn_82AD17B0(c, v1));
  *(unsigned *)(r + 0x30) = fn_82AD1978(r, v2->m10 != 0 ? fn_82ACA920(c, v2, v2->m0c) : v2);
  ((Dst_82B493E8 *)(r + 8))->f = (*(Src_82B493E8 **)(r + 0x2c))->g ? (*(Src_82B493E8 **)(r + 0x2c))->g : 0;
  linkInsert((unsigned *)(*(char **)(c + 0x234) + 0x18), r);
  return r;
}
