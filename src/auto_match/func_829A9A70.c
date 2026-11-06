extern int fn_828F0170();
typedef struct { int a; int b; } Pair_829A9A70;
int fn_829A9A70(int *p)
{
  Pair_829A9A70 v;
  fn_828F0170("tx", 0, &v);
  p[10] = 0x40;
  p[11] = 0x40;
  p[12] = 0;
  p[14] = 0x2000;
  p[28] |= 0x80200000;
  p[67] = v.b;
  p[27] = (p[27] & 0xbfbfffff) | 0x24200000;
  return 0;
}
