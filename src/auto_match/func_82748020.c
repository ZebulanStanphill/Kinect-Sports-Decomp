typedef struct { unsigned vt; unsigned refs_ctl; unsigned refs; } Ref_82748020;

typedef struct {
  void *ctx;
  char kind;
} Params_82748020;

typedef struct { unsigned a, b, c, d; } Copy_82748020;

typedef struct {
  void *pad[10];
  void (*run)(void *self, Params_82748020 *p, void *ctx, void *copy, char *flag);
} Vt_82748020;

typedef struct {
  Vt_82748020 *vt;
} Sub_82748020;

typedef struct {
  char pad0[0x10];
  Sub_82748020 sub;
} Holder_82748020;

typedef struct {
  char pad0[0x44];
  char slot60[0x234];
  char map[0x10];
  void *heap;
  
  Holder_82748020 *holder;
} Ctx_82748020;

typedef struct {
  void *a;
  unsigned b;
  char c;
} Out_82748020;

extern void *fn_8267B890(void *, int, int);
extern void *fn_82747C50(void *, Params_82748020 *);
extern int fn_826B14D8(Ctx_82748020 *, int);
extern Ref_82748020 *fn_82747CA0(void *, Params_82748020 *, int, Out_82748020 *);
extern void fn_826A5E30(void *, unsigned *, Ref_82748020 **);
extern void fn_826824B0(Ref_82748020 *);
extern int fn_82695750(Copy_82748020 *, Out_82748020 *);
extern void fn_82696330(Copy_82748020 *);

Out_82748020 *fn_82748020(Out_82748020 *out, Ctx_82748020 *ctx)
{
  Params_82748020 p;
  Copy_82748020 copy;
  Ref_82748020 *ref, *r2;
  unsigned key;
  char flag;
  void *a, *b;

  p.kind = 8;
  p.ctx = ctx;
  a = fn_8267B890(ctx->heap, 0x34, 0);
  out->a = a ? fn_82747C50(a, &p) : 0;
  out->c = 0;
  out->b = 0;
  b = fn_8267B890(ctx->heap, 0x50, 0);
  if (b != 0) {
    ref = fn_82747CA0(b, &p, fn_826B14D8(ctx, 1), out);
  } else {
    ref = 0;
  }
  if (ref != 0) {
    ref->refs = (ref->refs + 1) & 0x8fffffff;
  }
  key = 0xf;
  r2 = ref;
  fn_826A5E30(ctx->map, &key, &r2);
  if (r2 != 0) fn_826824B0(r2);
  flag = 0;
  ctx->holder->sub.vt->run(&ctx->holder->sub, &p, ctx->slot60, (void *)fn_82695750(&copy, out), &flag);
  fn_82696330(&copy);
  if (ref != 0) fn_826824B0(ref);
  return out;
}
