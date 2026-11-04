typedef struct { unsigned vt; unsigned refs_ctl; unsigned refs; } Ref_827142E0;

typedef struct {
  void *ctx;
  char kind;
} Params_827142E0;

typedef struct { unsigned a, b, c, d; } Copy_827142E0;

typedef struct {
  void *pad[10];
  void (*run)(void *self, Params_827142E0 *p, void *ctx, void *copy, char *flag);
} Vt_827142E0;

typedef struct {
  Vt_827142E0 *vt;
} Sub_827142E0;

typedef struct {
  char pad0[0x10];
  Sub_827142E0 sub;
} Holder_827142E0;

typedef struct {
  char pad0[0x1c];
  char slot54[0x25c];
  char map[0x10];
  void *heap;
  char pad28c[0x14];
  Holder_827142E0 *holder;
} Ctx_827142E0;

typedef struct {
  void *a;
  unsigned b;
  char c;
} Out_827142E0;

extern void *fn_8267B890(void *, int, int);
extern void *fn_82714070(void *, Params_827142E0 *);
extern int fn_826B14D8(Ctx_827142E0 *, int);
extern Ref_827142E0 *fn_82714250(void *, Params_827142E0 *, int, Out_827142E0 *);
extern void fn_826A5E30(void *, unsigned *, Ref_827142E0 **);
extern void fn_826824B0(Ref_827142E0 *);
extern int fn_82695750(Copy_827142E0 *, Out_827142E0 *);
extern void fn_82696330(Copy_827142E0 *);

Out_827142E0 *fn_827142E0(Out_827142E0 *out, Ctx_827142E0 *ctx)
{
  Params_827142E0 p;
  Copy_827142E0 copy;
  Ref_827142E0 *ref, *r2;
  unsigned key;
  char flag;
  void *a, *b;
  Holder_827142E0 *h;
  Vt_827142E0 *vt;

  p.kind = 8;
  p.ctx = ctx;
  a = fn_8267B890(ctx->heap, 0x34, 0);
  out->a = a ? fn_82714070(a, &p) : 0;
  out->c = 0;
  out->b = 0;
  b = fn_8267B890(ctx->heap, 0x54, 0);
  if (b != 0) {
    ref = fn_82714250(b, &p, fn_826B14D8(ctx, 1), out);
  } else {
    ref = 0;
  }
  if (ref != 0) {
    ref->refs = (ref->refs + 1) & 0x8fffffff;
  }
  key = 0x5;
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
