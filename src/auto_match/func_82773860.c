extern unsigned char fn_82773748(void *, unsigned);
extern unsigned char fn_827737E8(void *, unsigned, int);

unsigned char fn_82773860(void *o, unsigned a, unsigned b)
{
  unsigned c = a & 0xffff;
  unsigned char sp;
  if (c == 0) return 0;
  sp = c == 9 || c == 0xd || c == 0x20 || c == 0x3000;
  return (sp || fn_82773748(o, b) || fn_82773748(o, a) || c == 0x2d) &&
         fn_827737E8(o, b, 1) == 0 && fn_827737E8(o, a, 2) == 0;
}
