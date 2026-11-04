typedef struct { unsigned vt; unsigned refs_ctl; unsigned refs; } Ref_82719D18;

typedef struct {
  void *ctx;
  char kind;
} Params_82719D18;

typedef struct { unsigned a, b, c, d; } Copy_82719D18;

typedef struct {
  void *pad[10];
  void (*run)(void *self, Params_82719D18 *p, void *ctx, void *copy, char *flag);
} Vt_82719D18;

typedef struct {
  Vt_82719D18 *vt;
} Sub_82719D18;

typedef struct {
  char pad0[0x10];
  Sub_82719D18 sub;
} Holder_82719D18;

typedef struct {
  char pad0[0x2c];
  char slot54[0x24c];
  char map[0x10];
  void *heap;
  char pad28c[0x14];
  Holder_82719D18 *holder;
} Ctx_82719D18;

typedef struct {
  void *a;
  unsigned b;
  char c;
} Out_82719D18;

extern void *fn_8267B890(void *, int, int);
extern void *fn_82715610(void *, Params_82719D18 *);
extern int fn_826B14D8(Ctx_82719D18 *, int);
extern Ref_82719D18 *fn_82716DB8(void *, Params_82719D18 *, int, Out_82719D18 *);
extern void fn_826A5E30(void *, unsigned *, Ref_82719D18 **);
extern void fn_826824B0(Ref_82719D18 *);
extern int fn_82695750(Copy_82719D18 *, Out_82719D18 *);
extern void fn_82696330(Copy_82719D18 *);

Out_82719D18 *fn_82719D18(Out_82719D18 *out, Ctx_82719D18 *ctx)
{
  Params_82719D18 p;
  Copy_82719D18 copy;
  Ref_82719D18 *ref, *r2;
  unsigned key;
  char flag;
  void *a, *b;
  Holder_82719D18 *h;
  Vt_82719D18 *vt;

  p.kind = 8;
  p.ctx = ctx;
  a = fn_8267B890(ctx->heap, 0x34, 0);
  out->a = a ? fn_82715610(a, &p) : 0;
  out->c = 0;
  out->b = 0;
  b = fn_8267B890(ctx->heap, 0x54, 0);
  if (b != 0) {
    ref = fn_82716DB8(b, &p, fn_826B14D8(ctx, 1), out);
  } else {
    ref = 0;
  }
  if (ref != 0) {
    ref->refs = (ref->refs + 1) & 0x8fffffff;
  }
  key = 0x9;
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
