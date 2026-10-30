typedef struct Lnk_82B49CC0 { unsigned next; unsigned prev; } Lnk_82B49CC0;
typedef struct Src_82B49CC0 { unsigned pad : 4; unsigned f : 3; } Src_82B49CC0;
typedef struct Entry_82B49CC0 {
  char pad0[8];
  unsigned a : 15;
  unsigned f : 3;
  unsigned b : 14;
  char pad1[0x18];
  Lnk_82B49CC0 lnk;
  Src_82B49CC0 *src;
  int w30;
} Entry_82B49CC0;
typedef struct Ctx_82B49CC0 { char pad[0x234]; char *heap; } Ctx_82B49CC0;
extern Entry_82B49CC0 *fn_82B841E8(Ctx_82B49CC0 *c, char *heap, int a, int b, int c2, int d);
extern int fn_82AD17B0(Ctx_82B49CC0 *c, int v);
extern int fn_82AD1978(Entry_82B49CC0 *e, int v);

Entry_82B49CC0 *fn_82B49CC0(Ctx_82B49CC0 *c, int a, int b)
{
  Entry_82B49CC0 *e = fn_82B841E8(c, c->heap, 0, 1, 2, 4);
  Lnk_82B49CC0 *l;
  unsigned *head;
  e->src = (Src_82B49CC0 *)fn_82AD1978(e, fn_82AD17B0(c, a));
  e->w30 = fn_82AD1978(e, fn_82AD17B0(c, b));
  e->f = e->src->f ? e->src->f : 0;
  l = &((Entry_82B49CC0 *)((unsigned)e & 0xfffffffe))->lnk;
  head = (unsigned *)(c->heap + 0x18);
  l->next = *head;
  *(unsigned *)(*head & 0xfffffffe) = (unsigned)l - 0x24;
  l->prev = ((unsigned)head - 0x24) | 1;
  *head = (unsigned)&l->prev;
  return e;
}
