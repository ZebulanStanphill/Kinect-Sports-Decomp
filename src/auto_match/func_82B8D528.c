extern int fn_82B8B280(int, int, int, int, int);
extern unsigned char fn_82B8BCB0(int, int, int, int);

unsigned int fn_82B8D528(int a, int b, int c)
{
  unsigned int k;
  unsigned char ok;


  k = *(unsigned int *)(b + 8) >> 7 & 0x7f;
  if (k != 0x70) {
    ok = k == 0x7d || k == 0x7c;
    if (!ok && k != 0x71) {
      return fn_82B8BCB0(c, a, b, 1) == 0;
    }
  }
  return fn_82B8B280(a, b, 0, 1, c);
}
