typedef struct Rec_826E0920 {
  char pad[8]; unsigned id; void *f0c; int f10; unsigned short f14; unsigned short f16; int f18; int f1c;
} Rec_826E0920;
typedef struct Sub_826E0920 { char pad[0x4c]; unsigned f4c; } Sub_826E0920;
typedef struct Ctx_826E0920 { char pad[0x20]; Sub_826E0920 *f20; } Ctx_826E0920;
typedef struct VT_826E0920 { int f0, f4; void (*f8)(void *self, int a); } VT_826E0920;
typedef struct Held_826E0920 { VT_826E0920 **p; int arg; } Held_826E0920;
typedef struct Pair_826E0920 { int first; unsigned second; } Pair_826E0920;
typedef struct Out_826E0920 { int a, b; } Out_826E0920;
extern int lbl_831E7E64;
extern void *fn_8267B890(int heap, int size, int z);
extern void fn_8267C498(void *p);
extern void fn_82687270(unsigned p);
extern void fn_8268B8E8(void *dst, int src);
extern void fn_826D6290(Out_826E0920 *o, void *v);
extern Rec_826E0920 *fn_826DFC10(void *mem);
extern void *fn_826F3CF0(Held_826E0920 *h, Rec_826E0920 *r);
extern void *fn_826F47F0(Pair_826E0920 *p, Ctx_826E0920 *c, int *tmp, void *h);

Out_826E0920 *fn_826E0920(Out_826E0920 *out, Ctx_826E0920 *ctx, int *p3, int a, int b, unsigned c, unsigned short d, unsigned short e)
{
  Rec_826E0920 *r;
  void *mem;
  Sub_826E0920 *s;
  int tmp;
  Pair_826E0920 pair;
  Held_826E0920 held;
  r = 0;
  out->a = 0;
  out->b = 0;
  mem = fn_8267B890(lbl_831E7E64, 0x20, 0);
  if (mem != 0) r = fn_826DFC10(mem);
  else r = 0;
  if (r != 0) {
    fn_8268B8E8(&r->f10, a);
    fn_8268B8E8(&r->f1c, b);
    s = ctx->f20;
    r->f0c = s->f4c != 0 ? &s->f4c : 0;
    r->id = c & 0xffff;
    r->f14 = d;
    r->f16 = e;
    if ((*p3 & 0xfff0000) == 0x60000) r->f18 = 3;
    tmp = *p3;
    fn_826D6290(out, fn_826F47F0(&pair, ctx, &tmp, fn_826F3CF0(&held, r)));
    if (pair.first == 0 && pair.second != 0) fn_82687270(pair.second);
    if (held.p != 0) (*held.p)->f8(held.p, held.arg);
    fn_8267C498(r);
  }
  return out;
}
