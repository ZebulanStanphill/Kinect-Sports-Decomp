typedef struct { unsigned prev; unsigned tag; } Link_82B482B0;
typedef struct { unsigned : 4; unsigned g : 3; unsigned : 25; } Src_82B482B0;
typedef struct { unsigned : 15; unsigned f : 3; unsigned : 14; } Dst_82B482B0;
typedef struct { char pad[0xc]; int m0c; unsigned m10; } Val_82B482B0;
extern unsigned fn_82B841E8(void *, void *, int, int, int, int);
extern Val_82B482B0 *fn_82ACA920(void *, Val_82B482B0 *, int);
extern unsigned fn_82AD1978(unsigned, Val_82B482B0 *);

static __forceinline void linkInsert(unsigned *h, unsigned r)
{
  Link_82B482B0 *l = (Link_82B482B0 *)((r & 0xfffffffe) + 0x24);
  l->prev = *h;
  *(unsigned *)(*h & 0xfffffffe) = (unsigned)l - 0x24;
  l->tag = ((unsigned)h - 0x24) | 1;
  *h = (unsigned)&l->tag;
}

unsigned fn_82B482B0(char *c, Val_82B482B0 *v)
{
  unsigned r = fn_82B841E8(c, *(char **)(c + 0x234), 0, 0xb, 1, 4);
  *(unsigned *)(r + 0x2c) = fn_82AD1978(r, v->m10 != 0 ? fn_82ACA920(c, v, v->m0c) : v);
  ((Dst_82B482B0 *)(r + 8))->f = (*(Src_82B482B0 **)(r + 0x2c))->g ? (*(Src_82B482B0 **)(r + 0x2c))->g : 0;
  linkInsert((unsigned *)(*(char **)(c + 0x234) + 0x18), r);
  return r;
}
