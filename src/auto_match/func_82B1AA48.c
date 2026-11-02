typedef struct Val_82B1AA48 { char pad[0xc]; int w0c; void *w10; } Val_82B1AA48;
typedef struct Src_82B1AA48 { unsigned pad : 4; unsigned f : 3; } Src_82B1AA48;
typedef struct Entry_82B1AA48 {
  char pad0[8];
  unsigned a : 15;
  unsigned f : 3;
  unsigned b : 14;
  char pad1[0x20];
  Src_82B1AA48 *src;
} Entry_82B1AA48;
typedef struct Ctx_82B1AA48 { char pad[0x1c]; char *heap; } Ctx_82B1AA48;
extern Entry_82B1AA48 *fn_82B841E8(void *c, char *heap, int a, int b, int c2, int d);
extern Val_82B1AA48 *fn_82ACA920(void *c, Val_82B1AA48 *v, int w);
extern int fn_82AD17B0(void *c, int v);
extern int fn_82AD1978(Entry_82B1AA48 *e, void *v);
extern void fn_82AC6860(void *c, Entry_82B1AA48 *e, int a, Ctx_82B1AA48 *b);

Entry_82B1AA48 *fn_82B1AA48(void *c, int a, Ctx_82B1AA48 *b, Val_82B1AA48 *q0)
{
  Entry_82B1AA48 *e = fn_82B841E8(c, b->heap, 0,10,1,4);
  e->src = (Src_82B1AA48 *)fn_82AD1978(e, q0->w10 != 0 ? fn_82ACA920(c, q0, q0->w0c) : q0);
  e->f = e->src->f ? e->src->f : 0;
  fn_82AC6860(c, e, a, b);
  return e;
}
