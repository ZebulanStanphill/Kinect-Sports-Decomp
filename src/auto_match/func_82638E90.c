void fn_82638E90(char *o, unsigned v)
{
  unsigned f, m;
  unsigned *w = (unsigned *)(o + 0x2890);
  *(unsigned *)(o + 0x2fb4) = v;
  if (*(unsigned *)(o + 0x3150) == 0) return;
  f = *(unsigned *)(o + 0x2890);
  m = (f >> 16) & 0xf;
  if (m != 2 && m != 3 && m != 10 && m != 12) return;
  if ((((f >> 19) & 1) ^ v) == 0) return;
  *w = (f & 0xfff0ffff) | ((((~(v - 1)) << 16) & ((m + 3) * 0x20000) | ((((m >> 1) - 3) & (v - 1)) << 16)) & 0xf0000);
  *(unsigned __int64 *)(o + 0x10) |= 0x20000000000000ULL;
}
