#include "havok/hkString.h"

extern "C" int fn_82D041F8(unsigned int *param_1, char *param_2, int param_3)
{
  const char *p;

  p = hkString::strStr((char *)(*param_1 + param_3), param_2);
  if (p != 0) {
    return (int)p - *param_1;
  }
  return -1;
}
