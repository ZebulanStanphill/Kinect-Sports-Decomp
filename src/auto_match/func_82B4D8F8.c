typedef struct Val_82B4D8F8 { char pad[0xc]; int w0c; void *w10; } Val_82B4D8F8;
typedef struct Src_82B4D8F8 { unsigned pad : 4; unsigned f : 3; } Src_82B4D8F8;
typedef struct Lnk_82B4D8F8 { unsigned next; unsigned prev; } Lnk_82B4D8F8;
typedef struct Entry_82B4D8F8 {
  char pad0[8];
  unsigned a : 15;
  unsigned f : 3;
  unsigned b : 14;
  char pad1[0x20];
  Src_82B4D8F8 *src;
  int w30;
} Entry_82B4D8F8;
typedef struct Ctx_82B4D8F8 { char pad[0x234]; char *heap; } Ctx_82B4D8F8;
extern Entry_82B4D8F8 *fn_82B841E8(Ctx_82B4D8F8 *c, char *heap, int a, int b, int c2, int d);
extern Val_82B4D8F8 *fn_82ACA920(Ctx_82B4D8F8 *c, Val_82B4D8F8 *v, int w);
extern int fn_82B4BAA8(Ctx_82B4D8F8 *c, void *v);
extern int fn_82AD17B0(Ctx_82B4D8F8 *c, int v);
extern int fn_82AD1978(Entry_82B4D8F8 *e, void *v);

Entry_82B4D8F8 *fn_82B4D8F8(Ctx_82B4D8F8 *c, void *q0, void *q1)
{
  Entry_82B4D8F8 *e = fn_82B841E8(c, c->heap, 0,3,2,4);
  Lnk_82B4D8F8 *l;
  unsigned *head;
  e->src = (Src_82B4D8F8 *)fn_82AD1978(e, fn_82B4BAA8(c, q0));
  e->w30 = fn_82AD1978(e, fn_82B4BAA8(c, q1));
  e->f = e->src->f ? e->src->f : 0;
  head = (unsigned *)(c->heap + 0x18);
  l = (Lnk_82B4D8F8 *)(((unsigned)e & 0xfffffffe) + 0x24);
  l->next = *head;
  *(unsigned *)(*head & 0xfffffffe) = (unsigned)l - 0x24;
  l->prev = ((unsigned)head - 0x24) | 1;
  *head = (unsigned)&l->prev;
  return e;
}
