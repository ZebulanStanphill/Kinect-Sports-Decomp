#include "xdk/vectorintrinsics.h"

extern int fn_830DF2D0();
extern void fn_830E6BA8(void *, int, int, int, int, __vector4);

void fn_830E80D0(int a, int b, int c, char *p, int n)
{
  int sz = (n + 1) * 8;
  char buf[768];
  fn_830DF2D0(a, b, buf, sz, sz);
  fn_830E6BA8(buf, b, c, sz, sz, *(__vector4 *)(p + 0x450));
}
