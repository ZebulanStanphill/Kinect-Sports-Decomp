typedef struct Val_82AF7C20 { char pad[0xc]; int w0c; void *w10; } Val_82AF7C20;
typedef struct Src_82AF7C20 { unsigned pad : 4; unsigned f : 3; } Src_82AF7C20;
typedef struct Entry_82AF7C20 {
  char pad0[8];
  unsigned a : 15;
  unsigned f : 3;
  unsigned b : 14;
  char pad1[0x20];
  Src_82AF7C20 *src;
  int w30;
  int w34;
} Entry_82AF7C20;
typedef struct Ctx_82AF7C20 { char pad[0x1c]; char *heap; } Ctx_82AF7C20;
extern Entry_82AF7C20 *fn_82B841E8(void *c, char *heap, int a, int b, int c2, int d);
extern Val_82AF7C20 *fn_82ACA920(void *c, Val_82AF7C20 *v, int w);
extern int fn_82AD1978(Entry_82AF7C20 *e, Val_82AF7C20 *v);
extern void fn_82AC6860(void *c, Entry_82AF7C20 *e, int a, Ctx_82AF7C20 *b);

Entry_82AF7C20 *fn_82AF7C20(void *c, int a, Ctx_82AF7C20 *b, Val_82AF7C20 *v1, Val_82AF7C20 *v2, Val_82AF7C20 *v3)
{
  Entry_82AF7C20 *e = fn_82B841E8(c, b->heap, 0, 0xe, 3, 4);
  e->src = (Src_82AF7C20 *)fn_82AD1978(e, v1->w10 != 0 ? fn_82ACA920(c, v1, v1->w0c) : v1);
  e->w30 = fn_82AD1978(e, v2->w10 != 0 ? fn_82ACA920(c, v2, v2->w0c) : v2);
  e->w34 = fn_82AD1978(e, v3->w10 != 0 ? fn_82ACA920(c, v3, v3->w0c) : v3);
  e->f = e->src->f ? e->src->f : 0;
  fn_82AC6860(c, e, a, b);
  return e;
}
