typedef struct Src_82B17520 {
  char pad[8];
  unsigned p10 : 10;
  unsigned a : 3;
  unsigned p2 : 2;
  unsigned b : 3;
  unsigned c : 7;
  unsigned rest : 7;
} Src_82B17520;
typedef union W_82B17520 {
  unsigned raw;
  struct { unsigned p23 : 23; unsigned a6 : 6; unsigned b3 : 3; } w;
  struct { unsigned p24 : 24; unsigned bit7 : 1; unsigned p1 : 1; unsigned e : 4; unsigned lo : 2; } r;
} W_82B17520;
typedef struct Tgt_82B17520 { char pad[8]; W_82B17520 w; } Tgt_82B17520;
extern int fn_82ABDD90(void *, unsigned, unsigned, unsigned);
extern void fn_82AA65B0(void *, int);

static __inline unsigned char Chk_82B17520(Tgt_82B17520 *t)
{
  if (t->w.r.lo != 0)
    return 1;
  return t->w.r.bit7 == 0;
}

void fn_82B17520(void *ctx, Src_82B17520 *s)
{
  Tgt_82B17520 *t;
  int off = fn_82ABDD90(ctx, s->c, s->a, s->b);
  t = (Tgt_82B17520 *)(off + ((int)s - 0x10));
  if (Chk_82B17520(t) && t->w.r.lo == 0 && (char)t->w.r.e == 5)
    fn_82AA65B0(ctx, 0xe01);
  t->w.w.a6 = 0x1b;
  t->w.w.b3 = 0;
}
