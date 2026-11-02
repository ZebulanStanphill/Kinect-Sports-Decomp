typedef struct Val_82AF7D20 { char pad[0xc]; int w0c; void *w10; } Val_82AF7D20;
typedef struct Src_82AF7D20 { unsigned pad : 4; unsigned f : 3; } Src_82AF7D20;
typedef struct Entry_82AF7D20 {
  char pad0[8];
  unsigned a : 15;
  unsigned f : 3;
  unsigned b : 14;
  char pad1[0x20];
  Src_82AF7D20 *src;
  int w30;
  int w34;
} Entry_82AF7D20;
typedef struct Ctx_82AF7D20 { char pad[0x1c]; char *heap; } Ctx_82AF7D20;
extern Entry_82AF7D20 *fn_82B841E8(void *c, char *heap, int a, int b, int c2, int d);
extern Val_82AF7D20 *fn_82ACA920(void *c, Val_82AF7D20 *v, int w);
extern int fn_82AD17B0(void *c, int v);
extern int fn_82AD1978(Entry_82AF7D20 *e, void *v);
extern void fn_82AC6860(void *c, Entry_82AF7D20 *e, int a, Ctx_82AF7D20 *b);

Entry_82AF7D20 *fn_82AF7D20(void *c, int a, Ctx_82AF7D20 *b, Val_82AF7D20 *q0, Val_82AF7D20 *q1, Val_82AF7D20 *q2)
{
  Entry_82AF7D20 *e = fn_82B841E8(c, b->heap, 0,0xf,3,4);
  e->src = (Src_82AF7D20 *)fn_82AD1978(e, q0->w10 != 0 ? fn_82ACA920(c, q0, q0->w0c) : q0);
  e->w30 = fn_82AD1978(e, q1->w10 != 0 ? fn_82ACA920(c, q1, q1->w0c) : q1);
  e->w34 = fn_82AD1978(e, q2->w10 != 0 ? fn_82ACA920(c, q2, q2->w0c) : q2);
  e->f = e->src->f ? e->src->f : 0;
  fn_82AC6860(c, e, a, b);
  return e;
}
