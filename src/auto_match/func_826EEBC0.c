extern int fn_8277B4A0();
extern int fn_8277B540();
extern int fn_8277E360();
extern int fn_82784308();
extern int fn_82789958();
extern int fn_827B5EA8();

void fn_826EEBC0(char *p)
{
  char *q;
  fn_82784308(p + 8);
  fn_82784308(p + 0x50);
  fn_827B5EA8(p + 0xb0);
  p[0xc0] = 0;
  q = p + 0x298;
  fn_827B5EA8(q + 0x2c);
  p[0x2d4] = 0;
  fn_827B5EA8(q + 0x40);
  fn_827B5EA8(q + 0x50);
  fn_82789958(p + 0x308);
  fn_8277E360(p + 0xc4);
  fn_8277B4A0(p + 0x398, 0);
  fn_8277B540(p + 0x398, 0, 1);
}
