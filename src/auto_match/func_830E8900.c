#include "xdk/vectorintrinsics.h"

extern int fn_830DF2D0();
extern void fn_830E6E38(void *, int, int, int, int, __vector4);

void fn_830E8900(int a, int b, int c, char *p, int n)
{
  int sz = (n + 1) * 8;
  char buf[768];
  fn_830DF2D0(a, b, buf, sz, sz);
  fn_830E6E38(buf, b, c, sz, sz, *(__vector4 *)(p + 0x450));
}
