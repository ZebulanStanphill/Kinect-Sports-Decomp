typedef struct Bits_82807E08 {
  unsigned int *p[4];
  unsigned int out[4];
  unsigned char bit[4];
  char pad[0x23];
  unsigned char mask;
} Bits_82807E08;

void fn_82807E08(Bits_82807E08 *s, unsigned char n, unsigned int skip)
{
  int i;
  for (i = 0; i < 4; i++) {
    unsigned int *w = s->p[i];
    if (w != 0) {
      unsigned char t;
      if (skip == 0 && (s->mask & (1 << i)) != 0) {
        unsigned char b = s->bit[i];
        s->out[i] = (((w[1] << 1) << (31 - b)) | (w[0] >> b)) & ((1 << n) - 1);
      }
      t = s->bit[i] + n;
      s->bit[i] = t & 0x1f;
      s->p[i] = (unsigned int *)((int)s->p[i] + ((t >> 3) & 0x1c));
    }
  }
}
