typedef struct BitIt_8288BE40 {
  unsigned int *p;
  unsigned int off;
} BitIt_8288BE40;

static __forceinline void advance(BitIt_8288BE40 *it, int n)
{
  unsigned int v;

  if (n < 0 && it->off < (unsigned int)-n) {
    v = it->off + n;
    it->off = v & 0x1f;
    it->p -= ((0xffffffff - v) >> 5) + 1;
    return;
  }
  v = it->off + n;
  it->off = v & 0x1f;
  it->p += v >> 5;
}

BitIt_8288BE40 *fn_8288BE40(BitIt_8288BE40 *out, const BitIt_8288BE40 *it, int n)
{
  BitIt_8288BE40 t = *it;
  advance(&t, n);
  *out = t;
  return out;
}
