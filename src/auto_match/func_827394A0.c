typedef struct { unsigned vt; unsigned refs_ctl; unsigned refs; } Ref_827394A0;

typedef struct {
  void *ctx;
  char kind;
} Params_827394A0;

typedef struct { unsigned a, b, c, d; } Copy_827394A0;

typedef struct {
  void *pad[10];
  void (*run)(void *self, Params_827394A0 *p, void *ctx, void *copy, char *flag);
} Vt_827394A0;

typedef struct {
  Vt_827394A0 *vt;
} Sub_827394A0;

typedef struct {
  char pad0[0x10];
  Sub_827394A0 sub;
} Holder_827394A0;

typedef struct {
  char pad0[0xac];
  char slot54[0x1cc];
  char map[0x10];
  void *heap;
  char pad28c[0x14];
  Holder_827394A0 *holder;
} Ctx_827394A0;

typedef struct {
  void *a;
  unsigned b;
  char c;
} Out_827394A0;

extern void *fn_8267B890(void *, int, int);
extern void *fn_82737B90(void *, Params_827394A0 *);
extern int fn_826B14D8(Ctx_827394A0 *, int);
extern Ref_827394A0 *fn_82739360(void *, Params_827394A0 *, int, Out_827394A0 *);
extern void fn_826A5E30(void *, unsigned *, Ref_827394A0 **);
extern void fn_826824B0(Ref_827394A0 *);
extern int fn_82695750(Copy_827394A0 *, Out_827394A0 *);
extern void fn_82696330(Copy_827394A0 *);

Out_827394A0 *fn_827394A0(Out_827394A0 *out, Ctx_827394A0 *ctx)
{
  Params_827394A0 p;
  Copy_827394A0 copy;
  Ref_827394A0 *ref, *r2;
  unsigned key;
  char flag;
  void *a, *b;
  Holder_827394A0 *h;
  Vt_827394A0 *vt;

  p.kind = 8;
  p.ctx = ctx;
  a = fn_8267B890(ctx->heap, 0x34, 0);
  out->a = a ? fn_82737B90(a, &p) : 0;
  out->c = 0;
  out->b = 0;
  b = fn_8267B890(ctx->heap, 0x64, 0);
  if (b != 0) {
    ref = fn_82739360(b, &p, fn_826B14D8(ctx, 1), out);
  } else {
    ref = 0;
  }
  if (ref != 0) {
    ref->refs = (ref->refs + 1) & 0x8fffffff;
  }
  key = 0x29;
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
