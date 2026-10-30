typedef struct Val_82B1A7E8 { char pad[0xc]; int w0c; void *w10; } Val_82B1A7E8;
typedef struct Src_82B1A7E8 { unsigned pad : 4; unsigned f : 3; } Src_82B1A7E8;
typedef struct Entry_82B1A7E8 {
  char pad0[8];
  unsigned a : 15;
  unsigned f : 3;
  unsigned b : 14;
  char pad1[0x20];
  Src_82B1A7E8 *src;
  int w30;
} Entry_82B1A7E8;
typedef struct Ctx_82B1A7E8 { char pad[0x1c]; char *heap; } Ctx_82B1A7E8;
extern Entry_82B1A7E8 *fn_82B841E8(void *c, char *heap, int a, int b, int c2, int d);
extern Val_82B1A7E8 *fn_82ACA920(void *c, Val_82B1A7E8 *v, int w);
extern int fn_82AD1978(Entry_82B1A7E8 *e, Val_82B1A7E8 *v);
extern void fn_82AC6860(void *c, Entry_82B1A7E8 *e, int a, Ctx_82B1A7E8 *b);

Entry_82B1A7E8 *fn_82B1A7E8(void *c, int a, Ctx_82B1A7E8 *b, Val_82B1A7E8 *v1, Val_82B1A7E8 *v2)
{
  Entry_82B1A7E8 *e = fn_82B841E8(c, b->heap, 0, 2, 2, 4);
  e->src = (Src_82B1A7E8 *)fn_82AD1978(e, v1->w10 != 0 ? fn_82ACA920(c, v1, v1->w0c) : v1);
  e->w30 = fn_82AD1978(e, v2->w10 != 0 ? fn_82ACA920(c, v2, v2->w0c) : v2);
  e->f = e->src->f ? e->src->f : 0;
  fn_82AC6860(c, e, a, b);
  return e;
}
