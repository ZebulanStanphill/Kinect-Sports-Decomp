extern int fn_82230300(void *, int, int);
extern int fn_82A1EFC0(void *, int, int);
extern char lbl_821BABCC[];

unsigned *fn_8245A478(unsigned *p)
{
  p[0x2001a] = 0;
  p[0] = (unsigned)lbl_821BABCC;
  p[0x2001b] = 0;
  p[0x2001c] = 0;
  p[0x2001d] = 0;
  p[0x2001f] = 0;
  p[0x20020] = 0;
  p[0x20021] = 0;
  p[0x20022] = 0;
  p[0x2002a] = 0;
  p[0x2002f] = 0;
  *(unsigned __int64 *)(p + 0x20030) = 0;
  fn_82230300(p + 0x20032, 0, 0);
  fn_82A1EFC0(p + 3, 0, 0x8005a);
  p[0x2002b] = 0;
  return p;
}
