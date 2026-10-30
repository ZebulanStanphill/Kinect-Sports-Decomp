extern void fn_8267C488(void *p);
extern void fn_826EEC48(void *p);
extern void fn_8277B488(void *p);
extern void fn_82782E90(void *p);
extern void fn_827B5EA8(void *p);


void fn_826EF160(char *o)
{
  fn_8277B488(o + 0x398);
  fn_82782E90(o + 0x308);
  {
    char *s = o + 0x298;
    fn_827B5EA8(s + 0x50);
    fn_827B5EA8(s + 0x40);
    fn_827B5EA8(s + 0x2c);
  }
  fn_826EEC48(o + 0xc4);
  fn_827B5EA8(o + 0xb0);
  {
    char *s = o + 0x50;
    fn_827B5EA8(s + 0x18);
    fn_827B5EA8(s + 0x8);
  }
  {
    char *s = o + 0x8;
    fn_827B5EA8(s + 0x18);
    fn_827B5EA8(s + 0x8);
  }
  fn_8267C488(o);
}
