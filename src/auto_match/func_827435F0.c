typedef struct { unsigned vt; unsigned refs_ctl; unsigned refs; } Ref_827435F0;

typedef struct {
  void *ctx;
  char kind;
} Params_827435F0;

typedef struct { unsigned a, b, c, d; } Copy_827435F0;

typedef struct {
  void *pad[10];
  void (*run)(void *self, Params_827435F0 *p, void *ctx, void *copy, char *flag);
} Vt_827435F0;

typedef struct {
  Vt_827435F0 *vt;
} Sub_827435F0;

typedef struct {
  char pad0[0x10];
  Sub_827435F0 sub;
} Holder_827435F0;

typedef struct {
  char pad0[0x3c];
  char slot60[0x23c];
  char map[0x10];
  void *heap;
  
  Holder_827435F0 *holder;
} Ctx_827435F0;

typedef struct {
  void *a;
  unsigned b;
  char c;
} Out_827435F0;

extern void *fn_8267B890(void *, int, int);
extern void *fn_82743518(void *, Params_827435F0 *);
extern int fn_826B14D8(Ctx_827435F0 *, int);
extern Ref_827435F0 *fn_82743568(void *, Params_827435F0 *, int, Out_827435F0 *);
extern void fn_826A5E30(void *, unsigned *, Ref_827435F0 **);
extern void fn_826824B0(Ref_827435F0 *);
extern int fn_82695750(Copy_827435F0 *, Out_827435F0 *);
extern void fn_82696330(Copy_827435F0 *);

Out_827435F0 *fn_827435F0(Out_827435F0 *out, Ctx_827435F0 *ctx)
{
  Params_827435F0 p;
  Copy_827435F0 copy;
  Ref_827435F0 *ref, *r2;
  unsigned key;
  char flag;
  void *a, *b;

  p.kind = 8;
  p.ctx = ctx;
  a = fn_8267B890(ctx->heap, 0x34, 0);
  out->a = a ? fn_82743518(a, &p) : 0;
  out->c = 0;
  out->b = 0;
  b = fn_8267B890(ctx->heap, 0x50, 0);
  if (b != 0) {
    ref = fn_82743568(b, &p, fn_826B14D8(ctx, 1), out);
  } else {
    ref = 0;
  }
  if (ref != 0) {
    ref->refs = (ref->refs + 1) & 0x8fffffff;
  }
  key = 0xd;
  r2 = ref;
  fn_826A5E30(ctx->map, &key, &r2);
  if (r2 != 0) fn_826824B0(r2);
  flag = 0;
  ctx->holder->sub.vt->run(&ctx->holder->sub, &p, ctx->slot60, (void *)fn_82695750(&copy, out), &flag);
  fn_82696330(&copy);
  if (ref != 0) fn_826824B0(ref);
  return out;
}
