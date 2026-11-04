typedef struct { unsigned vt; unsigned refs_ctl; unsigned refs; } Ref_8274B8E0;

typedef struct {
  void *ctx;
  char kind;
} Params_8274B8E0;

typedef struct { unsigned a, b, c, d; } Copy_8274B8E0;

typedef struct {
  void *pad[10];
  void (*run)(void *self, Params_8274B8E0 *p, void *ctx, void *copy, char *flag);
} Vt_8274B8E0;

typedef struct {
  Vt_8274B8E0 *vt;
} Sub_8274B8E0;

typedef struct {
  char pad0[0x10];
  Sub_8274B8E0 sub;
} Holder_8274B8E0;

typedef struct {
  char pad0[0x4c];
  char slot60[0x22c];
  char map[0x10];
  void *heap;
  int pad28c;
  Holder_8274B8E0 *holder;
} Ctx_8274B8E0;

typedef struct {
  void *a;
  unsigned b;
  char c;
} Out_8274B8E0;

extern void *fn_8267B890(void *, int, int);
extern void *fn_82749E50(void *, Params_8274B8E0 *);
extern int fn_826B14D8(Ctx_8274B8E0 *, int);
extern Ref_8274B8E0 *fn_826C2A40(void *, Params_8274B8E0 *, int, Out_8274B8E0 *);
extern void fn_826A5E30(void *, unsigned *, Ref_8274B8E0 **);
extern void fn_826824B0(Ref_8274B8E0 *);
extern int fn_82695750(Copy_8274B8E0 *, Out_8274B8E0 *);
extern void fn_82696330(Copy_8274B8E0 *);

Out_8274B8E0 *fn_8274B8E0(Out_8274B8E0 *out, Ctx_8274B8E0 *ctx)
{
  Params_8274B8E0 p;
  Copy_8274B8E0 copy;
  Ref_8274B8E0 *ref, *r2;
  unsigned key;
  char flag;
  void *a, *b;

  p.kind = 8;
  p.ctx = ctx;
  a = fn_8267B890(ctx->heap, 0x34, 0);
  out->a = a ? fn_82749E50(a, &p) : 0;
  out->c = 0;
  out->b = 0;
  b = fn_8267B890(ctx->heap, 0x50, 0);
  if (b != 0) {
    ref = fn_826C2A40(b, &p, fn_826B14D8(ctx, 1), out);
  } else {
    ref = 0;
  }
  if (ref != 0) {
    ref->refs = (ref->refs + 1) & 0x8fffffff;
  }
  key = 0x11;
  r2 = ref;
  fn_826A5E30(ctx->map, &key, &r2);
  if (r2 != 0) fn_826824B0(r2);
  flag = 0;
  ctx->holder->sub.vt->run(&ctx->holder->sub, &p, ctx->slot60, (void *)fn_82695750(&copy, out), &flag);
  fn_82696330(&copy);
  if (ref != 0) fn_826824B0(ref);
  return out;
}
