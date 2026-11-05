extern void *fn_8265C940(unsigned, unsigned);
extern void fn_8265C990(void *, unsigned);

void *fn_82903F58(int self, unsigned n)
{
  unsigned cap = *(unsigned *)(self + 0x9c);
  if (n > cap) {
    unsigned c;
    void *p;
    if (cap != 0)
      c = cap << 1;
    else
      c = 0x10;
    for (; c < n; c <<= 1) {
    }
    p = fn_8265C940(c * 4, 0x24810000);
    if (p == 0)
      return 0;
    fn_8265C990(*(void **)(self + 0x98), 0x24810000);
    *(void **)(self + 0x98) = p;
    *(unsigned *)(self + 0x9c) = c;
  }
  return *(void **)(self + 0x98);
}
