extern void fn_82A965C8(void);
extern void fn_82A96610(void);
extern void fn_82A96690(void);
extern void fn_82A96728(void);
extern void fn_82A967A8(void);
extern unsigned int _CountLeadingZeros(unsigned int);
extern void __debugbreak(void);

void *fn_82A96AF8(int *p)
{
  switch ((unsigned int)p[2]) {
  case 8:
    return (void *)fn_82A965C8;
  case 0x10:
    if (p[0] == 1 &&
        (_CountLeadingZeros((unsigned int)p[7] >> p[0xb]) == 0x10 ||
         _CountLeadingZeros((unsigned int)p[8] >> p[0xc]) == 0x10 ||
         _CountLeadingZeros((unsigned int)p[9] >> p[0xd]) == 0x10 ||
         _CountLeadingZeros((unsigned int)p[10] >> p[0xe]) == 0x10))
      return (void *)fn_82A96690;
    return (void *)fn_82A96610;
  case 0x20:
    if (p[0] == 1 &&
        (_CountLeadingZeros((unsigned int)p[7] >> p[0xb]) == 0x10 ||
         _CountLeadingZeros((unsigned int)p[8] >> p[0xc]) == 0x10 ||
         _CountLeadingZeros((unsigned int)p[9] >> p[0xd]) == 0x10 ||
         _CountLeadingZeros((unsigned int)p[10] >> p[0xe]) == 0x10))
      return (void *)fn_82A967A8;
    return (void *)fn_82A96728;
  default:
    __debugbreak();
    return 0;
  }
}
