typedef unsigned int uint;
typedef unsigned short ushort;
#define SW(v) ((((v) >> 0x10 | (v) & 0xffff0000) >> 8 & 0xffff) | ((((v) << 0x10 | (v) & 0xffff) & 0xffff00) << 8))
static uint sw(uint v) { return (v >> 24) | ((v >> 8) & 0xff00) | ((v << 8) & 0xff0000) | (v << 24); }
static ushort sh(ushort v) { return v << 8 | v >> 8; }
void fn_8291C948(uint *d, uint *s)
{
  d[0] = sw(s[0]);
  d[1] = sw(s[1]);
  d[2] = sw(s[2]);
  *(ushort *)(d + 3) = sh(*(ushort *)(s + 3));
  *(ushort *)((int)d + 0xe) = sh(*(ushort *)((int)s + 0xe));
  d[4] = sw(s[4]);
  d[5] = sw(s[5]);
  d[6] = sw(s[6]);
  d[7] = sw(s[7]);
  d[8] = sw(s[8]);
  d[9] = sw(s[9]);
}
