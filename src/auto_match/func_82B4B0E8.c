typedef struct { unsigned a, b; } Pair_82B4B0E8;
typedef struct { unsigned prev, next, cnt, sz; Pair_82B4B0E8 e[1]; } Chunk_82B4B0E8;
extern void fn_82AA6648(unsigned *, void *, unsigned);

static __forceinline void Unlink(unsigned n)
{
  unsigned *p = (unsigned *)(n & ~1u);
  *(unsigned *)(p[1] & ~1u) = p[0];
  *(unsigned *)(p[0] & ~1u) = p[1];
}

Pair_82B4B0E8 *fn_82B4B0E8(Pair_82B4B0E8 *out, unsigned *list, unsigned n)
{
  Chunk_82B4B0E8 *c;
  unsigned left;
  for (;;) {
    if ((list[1] & 1) != 0) c = 0;
    else c = (Chunk_82B4B0E8 *)((list[0] & ~1u) - 4);
    left = c->cnt;
    if (n <= left) break;
    n -= left;
    Unlink((unsigned)c);
    fn_82AA6648(list, c, (c->sz + 2) * 8);
  }
  left -= n;
  {
    unsigned off = (left + 2) * 8;
    unsigned a = *(unsigned *)((char *)c + off);
    unsigned b = *(unsigned *)((char *)c + off + 4);
    c->cnt = left;
    out->a = a;
    out->b = b;
  }
  if (left == 0) {
    Unlink((unsigned)c);
    fn_82AA6648(list, c, (c->sz + 2) * 8);
  }
  return out;
}
