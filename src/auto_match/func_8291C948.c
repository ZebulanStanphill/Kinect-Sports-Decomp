#define SW(v) ((((v) >> 0x10 | (v) & 0xffff0000) >> 8 & 0xffff) | ((((v) << 0x10 | (v) & 0xffff) & 0xffff00) << 8))
static unsigned int sw(unsigned int v) { return (v >> 24) | ((v >> 8) & 0xff00) | ((v << 8) & 0xff0000) | (v << 24); }
static unsigned short sh(unsigned short v) { return v << 8 | v >> 8; }
void fn_8291C948(unsigned int *d, unsigned int *s)
{
  d[0] = sw(s[0]);
  d[1] = sw(s[1]);
  d[2] = sw(s[2]);
  *(unsigned short *)(d + 3) = sh(*(unsigned short *)(s + 3));
  *(unsigned short *)((int)d + 0xe) = sh(*(unsigned short *)((int)s + 0xe));
  d[4] = sw(s[4]);
  d[5] = sw(s[5]);
  d[6] = sw(s[6]);
  d[7] = sw(s[7]);
  d[8] = sw(s[8]);
  d[9] = sw(s[9]);
}
