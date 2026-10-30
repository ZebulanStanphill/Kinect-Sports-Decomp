typedef struct { unsigned vt; unsigned refs_ctl; unsigned refs; } Ref_82720900;

typedef struct {
  void *ctx;
  char kind;
} Params_82720900;

typedef struct { unsigned a, b, c, d; } Copy_82720900;

typedef struct {
  void *pad[10];
  void (*run)(void *self, Params_82720900 *p, void *ctx, void *copy, char *flag);
} Vt_82720900;

typedef struct {
  Vt_82720900 *vt;
} Sub_82720900;

typedef struct {
  char pad0[0x10];
  Sub_82720900 sub;
} Holder_82720900;

typedef struct {
  char pad0[0x54];
  char slot54[0x224];
  char map[0x10];
  void *heap;
  char pad28c[0x14];
  Holder_82720900 *holder;
} Ctx_82720900;

typedef struct {
  void *a;
  unsigned b;
  char c;
} Out_82720900;

extern void *fn_8267B890(void *, int, int);
extern void *fn_82720688(void *, Params_82720900 *);
extern int fn_826B14D8(Ctx_82720900 *, int);
extern Ref_82720900 *fn_827205A8(void *, Params_82720900 *, int, Out_82720900 *);
extern void fn_826A5E30(void *, unsigned *, Ref_82720900 **);
extern void fn_826824B0(Ref_82720900 *);
extern int fn_82695750(Copy_82720900 *, Out_82720900 *);
extern void fn_82696330(Copy_82720900 *);

Out_82720900 *fn_82720900(Out_82720900 *out, Ctx_82720900 *ctx)
{
  Params_82720900 p;
  Copy_82720900 copy;
  Ref_82720900 *ref, *r2;
  unsigned key;
  char flag;
  void *a, *b;
  Holder_82720900 *h;
  Vt_82720900 *vt;

  p.kind = 8;
  p.ctx = ctx;
  a = fn_8267B890(ctx->heap, 0x34, 0);
  out->a = a ? fn_82720688(a, &p) : 0;
  out->c = 0;
  out->b = 0;
  b = fn_8267B890(ctx->heap, 0x50, 0);
  if (b != 0) {
    ref = fn_827205A8(b, &p, fn_826B14D8(ctx, 1), out);
  } else {
    ref = 0;
  }
  if (ref != 0) {
    ref->refs = (ref->refs + 1) & 0x8fffffff;
  }
  key = 0x13;
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
