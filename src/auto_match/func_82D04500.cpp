#include "havok/hkString.h"

extern "C" unsigned char *fn_82D04500(unsigned char *result, int *param_2, int param_3)
{
  int h = *param_2;
  *result = hkString::strCmp(reinterpret_cast<const char *>(h), reinterpret_cast<const char *>(param_3)) < 0;
  return result;
}
