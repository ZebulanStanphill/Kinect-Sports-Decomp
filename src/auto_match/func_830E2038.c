#include "xdk/vectorintrinsics.h"

extern int fn_830DF2D0();
extern void fn_830DFE40(void *, int, int, int, __vector4);

void fn_830E2038(int a, int b, int c, char *p, int n)
{
  int sz = (n + 1) * 8;
  char buf[768];
  fn_830DF2D0(a, b, buf, sz, sz);
  fn_830DFE40(buf, c, sz, sz, *(__vector4 *)(p + 0x450));
}
