extern void fn_82A95A58(void);
extern void fn_82A95AA8(void);
extern void fn_82A95B28(void);
extern void fn_82A95BC8(void);
extern void fn_82A95C48(void);
extern unsigned int _CountLeadingZeros(unsigned int);
extern void __debugbreak(void);

void *fn_82A969B8(int *p)
{
  switch ((unsigned int)p[2]) {
  case 8:
    return (void *)fn_82A95A58;
  case 0x10:
    if (p[0] == 1 &&
        (_CountLeadingZeros((unsigned int)p[7] >> p[0xb]) == 0x10 ||
         _CountLeadingZeros((unsigned int)p[8] >> p[0xc]) == 0x10 ||
         _CountLeadingZeros((unsigned int)p[9] >> p[0xd]) == 0x10 ||
         _CountLeadingZeros((unsigned int)p[10] >> p[0xe]) == 0x10))
      return (void *)fn_82A95B28;
    return (void *)fn_82A95AA8;
  case 0x20:
    if (p[0] == 1 &&
        (_CountLeadingZeros((unsigned int)p[7] >> p[0xb]) == 0x10 ||
         _CountLeadingZeros((unsigned int)p[8] >> p[0xc]) == 0x10 ||
         _CountLeadingZeros((unsigned int)p[9] >> p[0xd]) == 0x10 ||
         _CountLeadingZeros((unsigned int)p[10] >> p[0xe]) == 0x10))
      return (void *)fn_82A95C48;
    return (void *)fn_82A95BC8;
  default:
    __debugbreak();
    return 0;
  }
}
