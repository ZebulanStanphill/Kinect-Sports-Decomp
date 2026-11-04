typedef struct { unsigned vt; unsigned refs_ctl; unsigned refs; } Ref_82749BC0;

typedef struct {
  void *ctx;
  char kind;
} Params_82749BC0;

typedef struct { unsigned a, b, c, d; } Copy_82749BC0;

typedef struct {
  void *pad[10];
  void (*run)(void *self, Params_82749BC0 *p, void *ctx, void *copy, char *flag);
} Vt_82749BC0;

typedef struct {
  Vt_82749BC0 *vt;
} Sub_82749BC0;

typedef struct {
  char pad0[0x10];
  Sub_82749BC0 sub;
} Holder_82749BC0;

typedef struct {
  char pad0[0x48];
  char slot60[0x230];
  char map[0x10];
  void *heap;
  
  Holder_82749BC0 *holder;
} Ctx_82749BC0;

typedef struct {
  void *a;
  unsigned b;
  char c;
} Out_82749BC0;

extern void *fn_8267B890(void *, int, int);
extern void *fn_827496F8(void *, Params_82749BC0 *);
extern int fn_826B14D8(Ctx_82749BC0 *, int);
extern Ref_82749BC0 *fn_82749748(void *, Params_82749BC0 *, int, Out_82749BC0 *);
extern void fn_826A5E30(void *, unsigned *, Ref_82749BC0 **);
extern void fn_826824B0(Ref_82749BC0 *);
extern int fn_82695750(Copy_82749BC0 *, Out_82749BC0 *);
extern void fn_82696330(Copy_82749BC0 *);

Out_82749BC0 *fn_82749BC0(Out_82749BC0 *out, Ctx_82749BC0 *ctx)
{
  Params_82749BC0 p;
  Copy_82749BC0 copy;
  Ref_82749BC0 *ref, *r2;
  unsigned key;
  char flag;
  void *a, *b;

  p.kind = 8;
  p.ctx = ctx;
  a = fn_8267B890(ctx->heap, 0x34, 0);
  out->a = a ? fn_827496F8(a, &p) : 0;
  out->c = 0;
  out->b = 0;
  b = fn_8267B890(ctx->heap, 0x70, 0);
  if (b != 0) {
    ref = fn_82749748(b, &p, fn_826B14D8(ctx, 1), out);
  } else {
    ref = 0;
  }
  if (ref != 0) {
    ref->refs = (ref->refs + 1) & 0x8fffffff;
  }
  key = 0x10;
  r2 = ref;
  fn_826A5E30(ctx->map, &key, &r2);
  if (r2 != 0) fn_826824B0(r2);
  flag = 0;
  ctx->holder->sub.vt->run(&ctx->holder->sub, &p, ctx->slot60, (void *)fn_82695750(&copy, out), &flag);
  fn_82696330(&copy);
  if (ref != 0) fn_826824B0(ref);
  return out;
}
