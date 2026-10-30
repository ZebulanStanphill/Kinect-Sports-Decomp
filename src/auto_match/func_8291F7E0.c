typedef unsigned int uint;
static uint sw(uint v) { return (v >> 24) | ((v >> 8) & 0xff00) | ((v << 8) & 0xff0000) | (v << 24); }
void fn_8291F7E0(uint *d, uint *s)
{
  d[0] = sw(s[0]);
  d[1] = sw(s[1]);
  d[2] = sw(s[2]);
  d[3] = sw(s[3]);
  d[4] = sw(s[4]);
  d[5] = sw(s[5]);
  d[6] = sw(s[6]);
  d[7] = sw(s[7]);
}
