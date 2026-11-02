typedef struct Val_82B1AB88 { char pad[0xc]; int w0c; void *w10; } Val_82B1AB88;
typedef struct Src_82B1AB88 { unsigned pad : 4; unsigned f : 3; } Src_82B1AB88;
typedef struct Lnk_82B1AB88 { unsigned next; unsigned prev; } Lnk_82B1AB88;
typedef struct Entry_82B1AB88 {
  char pad0[8];
  unsigned a : 15;
  unsigned f : 3;
  unsigned b : 14;
  char pad1[0x20];
  Src_82B1AB88 *src;
  int w30;
  int w34;
} Entry_82B1AB88;
typedef struct Ctx_82B1AB88 Ctx_82B1AB88;
extern Entry_82B1AB88 *fn_82B841E8(Ctx_82B1AB88 *c, char *heap, int a, int b, int c2, int d);
extern Val_82B1AB88 *fn_82ACA920(Ctx_82B1AB88 *c, Val_82B1AB88 *v, int w);
extern int fn_82B4BAA8(Ctx_82B1AB88 *c, void *v);
extern int fn_82AD17B0(Ctx_82B1AB88 *c, int v);
extern int fn_82AD1978(Entry_82B1AB88 *e, void *v);

Entry_82B1AB88 *fn_82B1AB88(Ctx_82B1AB88 *c, char *heap, Val_82B1AB88 *q0, Val_82B1AB88 *q1, Val_82B1AB88 *q2)
{
  Entry_82B1AB88 *e = fn_82B841E8(c, heap, 0,0xe,3,4);
  Lnk_82B1AB88 *l;
  unsigned *head;
  e->src = (Src_82B1AB88 *)fn_82AD1978(e, q0->w10 != 0 ? fn_82ACA920(c, q0, q0->w0c) : q0);
  e->w30 = fn_82AD1978(e, q1->w10 != 0 ? fn_82ACA920(c, q1, q1->w0c) : q1);
  e->w34 = fn_82AD1978(e, q2->w10 != 0 ? fn_82ACA920(c, q2, q2->w0c) : q2);
  e->f = e->src->f ? e->src->f : 0;
  head = (unsigned *)(heap + 0x18);
  l = (Lnk_82B1AB88 *)(((unsigned)e & 0xfffffffe) + 0x24);
  l->next = *head;
  *(unsigned *)(*head & 0xfffffffe) = (unsigned)l - 0x24;
  l->prev = ((unsigned)head - 0x24) | 1;
  *head = (unsigned)&l->prev;
  return e;
}
