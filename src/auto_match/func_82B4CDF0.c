typedef struct { unsigned prev; unsigned tag; unsigned val; } Link_82B4CDF0;
typedef struct { char pad[0xc]; int m0c; unsigned m10; } Ctx_82B4CDF0;
typedef struct { char pad[0x18]; unsigned head; } List_82B4CDF0;
typedef struct { char pad[0x234]; List_82B4CDF0 *list; } Obj_82B4CDF0;
typedef struct { unsigned : 4; unsigned g : 3; unsigned : 25; } Src_82B4CDF0;
typedef struct { unsigned : 15; unsigned f : 3; unsigned : 14; } Dst_82B4CDF0;
extern unsigned fn_82B841E8(Obj_82B4CDF0 *, List_82B4CDF0 *, int, int, int, int);
extern Ctx_82B4CDF0 *fn_82ACA920(Obj_82B4CDF0 *, Ctx_82B4CDF0 *, int);
extern unsigned fn_82AD1978(unsigned, void *);
extern void *fn_82B4BAA8(Obj_82B4CDF0 *, unsigned __int64 *);

static __forceinline void linkInsert(unsigned *h, unsigned r)
{
  Link_82B4CDF0 *l = (Link_82B4CDF0 *)((r & 0xfffffffe) + 0x24);
  l->prev = *h;
  *(unsigned *)(*h & 0xfffffffe) = (unsigned)l - 0x24;
  l->tag = ((unsigned)h - 0x24) | 1;
  *h = (unsigned)&l->tag;
}

unsigned fn_82B4CDF0(Obj_82B4CDF0 *o, Ctx_82B4CDF0 *c, unsigned __int64 p3)
{
  unsigned r = fn_82B841E8(o, o->list, 0, 1, 2, 4);
  Ctx_82B4CDF0 *e;
  e = c;
  if (c->m10 != 0) e = fn_82ACA920(o, c, c->m0c);
  *(unsigned *)(r + 0x2c) = fn_82AD1978(r, e);
  *(unsigned *)(r + 0x30) = fn_82AD1978(r, fn_82B4BAA8(o, &p3));
  ((Dst_82B4CDF0 *)(r + 8))->f = (*(Src_82B4CDF0 **)(r + 0x2c))->g ? (*(Src_82B4CDF0 **)(r + 0x2c))->g : 0;
  linkInsert(&o->list->head, r);
  return r;
}
