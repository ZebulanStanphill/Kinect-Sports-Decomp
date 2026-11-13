typedef struct Bits_82BCF9F0 {
  unsigned int count;
  unsigned int pad;
  unsigned int w[1];
} Bits_82BCF9F0;

int fn_82BCF9F0(Bits_82BCF9F0 *a, Bits_82BCF9F0 *dst, Bits_82BCF9F0 *mask)
{
  int changed = 0;
  unsigned int i;
  for (i = 0; i < a->count; i++) {
    unsigned int v = (a->w[i] & ~mask->w[i]) | dst->w[i];
    if (v != dst->w[i]) {
      dst->w[i] = v;
      changed = 1;
    }
  }
  return changed;
}
