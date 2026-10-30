struct O_82DFF698 { char p0[0x14]; unsigned short cnt; };
extern unsigned fn_82DFF630(void);
unsigned fn_82DFF698(struct O_82DFF698 *o, unsigned n)
{
  unsigned u = fn_82DFF630();
  return ((o->cnt * 0x50 + 0xf) & 0xfffffff0) +
         (((u + u * 4) * 0x10 + 0xf) & 0xfffffff0) +
         (((u + u * 2) * 0x10 + 0xf) & 0xfffffff0) +
         ((n * 0x10 + 0xf) & 0xfffffff0);
}
