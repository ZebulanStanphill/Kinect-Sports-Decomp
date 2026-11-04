typedef struct { unsigned vt; unsigned refs_ctl; unsigned refs; } Ref_826A5F58;

typedef struct {
  void *ctx;
  char kind;
} Params_826A5F58;

typedef struct { unsigned a, b, c, d; } Copy_826A5F58;

typedef struct {
  void *pad[10];
  void (*run)(void *self, Params_826A5F58 *p, void *ctx, void *copy, char *flag);
} Vt_826A5F58;

typedef struct {
  Vt_826A5F58 *vt;
} Sub_826A5F58;

typedef struct {
  char pad0[0x10];
  Sub_826A5F58 sub;
} Holder_826A5F58;

typedef struct {
  char pad0[0x10];
  char slot54[0x268];
  char map[0x10];
  void *heap;
  char pad28c[0x14];
  Holder_826A5F58 *holder;
} Ctx_826A5F58;

typedef struct {
  void *a;
  unsigned b;
  char c;
} Out_826A5F58;

extern void *fn_8267B890(void *, int, int);
extern void *fn_826A4558(void *, Params_826A5F58 *);
extern int fn_826B14D8(Ctx_826A5F58 *, int);
extern Ref_826A5F58 *fn_826A4C78(void *, Params_826A5F58 *, int, Out_826A5F58 *);
extern void fn_826A5E30(void *, unsigned *, Ref_826A5F58 **);
extern void fn_826824B0(Ref_826A5F58 *);
extern int fn_82695750(Copy_826A5F58 *, Out_826A5F58 *);
extern void fn_82696330(Copy_826A5F58 *);

Out_826A5F58 *fn_826A5F58(Out_826A5F58 *out, Ctx_826A5F58 *ctx)
{
  Params_826A5F58 p;
  Copy_826A5F58 copy;
  Ref_826A5F58 *ref, *r2;
  unsigned key;
  char flag;
  void *a, *b;
  Holder_826A5F58 *h;
  Vt_826A5F58 *vt;

  p.kind = 8;
  p.ctx = ctx;
  a = fn_8267B890(ctx->heap, 0x34, 0);
  out->a = a ? fn_826A4558(a, &p) : 0;
  out->c = 0;
  out->b = 0;
  b = fn_8267B890(ctx->heap, 0x68, 0);
  if (b != 0) {
    ref = fn_826A4C78(b, &p, fn_826B14D8(ctx, 1), out);
  } else {
    ref = 0;
  }
  if (ref != 0) {
    ref->refs = (ref->refs + 1) & 0x8fffffff;
  }
  key = 0x2;
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
