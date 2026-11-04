typedef struct { unsigned vt; unsigned refs_ctl; unsigned refs; } Ref_8273C7F8;

typedef struct {
  void *ctx;
  char kind;
} Params_8273C7F8;

typedef struct { unsigned a, b, c, d; } Copy_8273C7F8;

typedef struct {
  void *pad[10];
  void (*run)(void *self, Params_8273C7F8 *p, void *ctx, void *copy, char *flag);
} Vt_8273C7F8;

typedef struct {
  Vt_8273C7F8 *vt;
} Sub_8273C7F8;

typedef struct {
  char pad0[0x10];
  Sub_8273C7F8 sub;
} Holder_8273C7F8;

typedef struct {
  char pad0[0x58];
  char slot54[0x220];
  char map[0x10];
  void *heap;
  char pad28c[0x14];
  Holder_8273C7F8 *holder;
} Ctx_8273C7F8;

typedef struct {
  void *a;
  unsigned b;
  char c;
} Out_8273C7F8;

extern void *fn_8267B890(void *, int, int);
extern void *fn_8273C6F0(void *, Params_8273C7F8 *);
extern int fn_826B14D8(Ctx_8273C7F8 *, int);
extern Ref_8273C7F8 *fn_8273C610(void *, Params_8273C7F8 *, int, Out_8273C7F8 *);
extern void fn_826A5E30(void *, unsigned *, Ref_8273C7F8 **);
extern void fn_826824B0(Ref_8273C7F8 *);
extern int fn_82695750(Copy_8273C7F8 *, Out_8273C7F8 *);
extern void fn_82696330(Copy_8273C7F8 *);

Out_8273C7F8 *fn_8273C7F8(Out_8273C7F8 *out, Ctx_8273C7F8 *ctx)
{
  Params_8273C7F8 p;
  Copy_8273C7F8 copy;
  Ref_8273C7F8 *ref, *r2;
  unsigned key;
  char flag;
  void *a, *b;
  Holder_8273C7F8 *h;
  Vt_8273C7F8 *vt;

  p.kind = 8;
  p.ctx = ctx;
  a = fn_8267B890(ctx->heap, 0x34, 0);
  out->a = a ? fn_8273C6F0(a, &p) : 0;
  out->c = 0;
  out->b = 0;
  b = fn_8267B890(ctx->heap, 0x80, 0);
  if (b != 0) {
    ref = fn_8273C610(b, &p, fn_826B14D8(ctx, 1), out);
  } else {
    ref = 0;
  }
  if (ref != 0) {
    ref->refs = (ref->refs + 1) & 0x8fffffff;
  }
  key = 0x14;
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
