typedef struct P8_82B4D3E0 { int a, b; } P8_82B4D3E0;
typedef struct Val_82B4D3E0 { char pad[0xc]; int w0c; void *w10; } Val_82B4D3E0;
typedef struct Src_82B4D3E0 { unsigned pad : 4; unsigned f : 3; } Src_82B4D3E0;
typedef struct Lnk_82B4D3E0 { unsigned next; unsigned prev; } Lnk_82B4D3E0;
typedef struct Entry_82B4D3E0 {
  char pad0[8];
  unsigned a : 15;
  unsigned f : 3;
  unsigned b : 14;
  char pad1[0x20];
  Src_82B4D3E0 *src;
  int w30;
} Entry_82B4D3E0;
typedef struct Ctx_82B4D3E0 { char pad[0x234]; char *heap; } Ctx_82B4D3E0;
extern Entry_82B4D3E0 *fn_82B841E8(Ctx_82B4D3E0 *c, char *heap, int a, int b, int c2, int d);
extern Val_82B4D3E0 *fn_82ACA920(Ctx_82B4D3E0 *c, Val_82B4D3E0 *v, int w);
extern int fn_82B4BAA8(Ctx_82B4D3E0 *c, void *v);
extern int fn_82AD17B0(Ctx_82B4D3E0 *c, int v);
extern int fn_82AD1978(Entry_82B4D3E0 *e, void *v);

Entry_82B4D3E0 *fn_82B4D3E0(Ctx_82B4D3E0 *c, P8_82B4D3E0 q0, P8_82B4D3E0 q1)
{
  Entry_82B4D3E0 *e = fn_82B841E8(c, c->heap, 0,2,2,4);
  Lnk_82B4D3E0 *l;
  unsigned *head;
  e->src = (Src_82B4D3E0 *)fn_82AD1978(e, fn_82B4BAA8(c, &q0));
  e->w30 = fn_82AD1978(e, fn_82B4BAA8(c, &q1));
  e->f = e->src->f ? e->src->f : 0;
  head = (unsigned *)(c->heap + 0x18);
  l = (Lnk_82B4D3E0 *)(((unsigned)e & 0xfffffffe) + 0x24);
  l->next = *head;
  *(unsigned *)(*head & 0xfffffffe) = (unsigned)l - 0x24;
  l->prev = ((unsigned)head - 0x24) | 1;
  *head = (unsigned)&l->prev;
  return e;
}
