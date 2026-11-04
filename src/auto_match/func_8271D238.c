typedef struct { unsigned vt; unsigned refs_ctl; unsigned refs; } Ref_8271D238;

typedef struct {
  void *ctx;
  char kind;
} Params_8271D238;

typedef struct { unsigned a, b, c, d; } Copy_8271D238;

typedef struct {
  void *pad[10];
  void (*run)(void *self, Params_8271D238 *p, void *ctx, void *copy, char *flag);
} Vt_8271D238;

typedef struct {
  Vt_8271D238 *vt;
} Sub_8271D238;

typedef struct {
  char pad0[0x10];
  Sub_8271D238 sub;
} Holder_8271D238;

typedef struct {
  char pad0[0x84];
  char slot54[0x1f4];
  char map[0x10];
  void *heap;
  char pad28c[0x14];
  Holder_8271D238 *holder;
} Ctx_8271D238;

typedef struct {
  void *a;
  unsigned b;
  char c;
} Out_8271D238;

extern void *fn_8267B890(void *, int, int);
extern void *fn_8271C580(void *, Params_8271D238 *);
extern int fn_826B14D8(Ctx_8271D238 *, int);
extern Ref_8271D238 *fn_8271D128(void *, Params_8271D238 *, int, Out_8271D238 *);
extern void fn_826A5E30(void *, unsigned *, Ref_8271D238 **);
extern void fn_826824B0(Ref_8271D238 *);
extern int fn_82695750(Copy_8271D238 *, Out_8271D238 *);
extern void fn_82696330(Copy_8271D238 *);

Out_8271D238 *fn_8271D238(Out_8271D238 *out, Ctx_8271D238 *ctx)
{
  Params_8271D238 p;
  Copy_8271D238 copy;
  Ref_8271D238 *ref, *r2;
  unsigned key;
  char flag;
  void *a, *b;
  Holder_8271D238 *h;
  Vt_8271D238 *vt;

  p.kind = 8;
  p.ctx = ctx;
  a = fn_8267B890(ctx->heap, 0x34, 0);
  out->a = a ? fn_8271C580(a, &p) : 0;
  out->c = 0;
  out->b = 0;
  b = fn_8267B890(ctx->heap, 0x60, 0);
  if (b != 0) {
    ref = fn_8271D128(b, &p, fn_826B14D8(ctx, 1), out);
  } else {
    ref = 0;
  }
  if (ref != 0) {
    ref->refs = (ref->refs + 1) & 0x8fffffff;
  }
  key = 0x1f;
  r2 = ref;
  fn_826A5E30(ctx->map, &key, &r2);
  if (r2 != 0) fn_826824B0(r2);
  flag = 0;
  h = ctx->holder;
  vt = h->sub.vt;
  vt->run(&h->sub, &p, ctx->slot54, (void *)fn_82695750(&copy, out), &flag);
  fn_82696330(&copy);
  if (ref != 0) fn_826824B0(ref);
  return out;
}
