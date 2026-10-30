typedef unsigned int uint;
extern void fn_8291F7E0(void *, void *);
static uint SW(uint v) { return (v >> 24) | ((v >> 8) & 0xff00) | ((v << 8) & 0xff0000) | (v << 24); }
void fn_8291F908(uint *d, uint *s)
{
  uint *p;
  int i;
  
  d[0] = SW(s[0]);
  d[1] = SW(s[1]);
  d[2] = SW(s[2]);
  d[3] = SW(s[3]);
  d[4] = SW(s[4]);
  d[5] = SW(s[5]);
  d[6] = SW(s[6]);
  p = s + 7;
  { int off = (int)d - (int)s;
  for (i = 0; i < 11; i++) { *(uint *)(off + (int)p) = SW(*p); p++; } }
  fn_8291F7E0(d + 0x12, s + 0x12);
  d[26] = SW(s[26]);
  d[27] = SW(s[27]);
  d[28] = SW(s[28]);
  d[29] = SW(s[29]);
  d[30] = SW(s[30]);
}
