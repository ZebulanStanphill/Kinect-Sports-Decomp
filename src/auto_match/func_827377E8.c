typedef struct { unsigned vt; unsigned refs_ctl; unsigned refs; } Ref_827377E8;

typedef struct {
  void *ctx;
  char kind;
} Params_827377E8;

typedef struct { unsigned a, b, c, d; } Copy_827377E8;

typedef struct {
  void *pad[10];
  void (*run)(void *self, Params_827377E8 *p, void *ctx, void *copy, char *flag);
} Vt_827377E8;

typedef struct {
  Vt_827377E8 *vt;
} Sub_827377E8;

typedef struct {
  char pad0[0x10];
  Sub_827377E8 sub;
} Holder_827377E8;

typedef struct {
  char pad0[0x88];
  char slot54[0x1f0];
  char map[0x10];
  void *heap;
  char pad28c[0x14];
  Holder_827377E8 *holder;
} Ctx_827377E8;

typedef struct {
  void *a;
  unsigned b;
  char c;
} Out_827377E8;

extern void *fn_8267B890(void *, int, int);
extern void *fn_82737760(void *, Params_827377E8 *);
extern int fn_826B14D8(Ctx_827377E8 *, int);
extern Ref_827377E8 *fn_82737680(void *, Params_827377E8 *, int, Out_827377E8 *);
extern void fn_826A5E30(void *, unsigned *, Ref_827377E8 **);
extern void fn_826824B0(Ref_827377E8 *);
extern int fn_82695750(Copy_827377E8 *, Out_827377E8 *);
extern void fn_82696330(Copy_827377E8 *);

Out_827377E8 *fn_827377E8(Out_827377E8 *out, Ctx_827377E8 *ctx)
{
  Params_827377E8 p;
  Copy_827377E8 copy;
  Ref_827377E8 *ref, *r2;
  unsigned key;
  char flag;
  void *a, *b;
  Holder_827377E8 *h;
  Vt_827377E8 *vt;

  p.kind = 8;
  p.ctx = ctx;
  a = fn_8267B890(ctx->heap, 0x34, 0);
  out->a = a ? fn_82737760(a, &p) : 0;
  out->c = 0;
  out->b = 0;
  b = fn_8267B890(ctx->heap, 0x94, 0);
  if (b != 0) {
    ref = fn_82737680(b, &p, fn_826B14D8(ctx, 1), out);
  } else {
    ref = 0;
  }
  if (ref != 0) {
    ref->refs = (ref->refs + 1) & 0x8fffffff;
  }
  key = 0x20;
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
