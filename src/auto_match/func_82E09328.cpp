#include "havok/hkMap.h"

typedef hkCachedHashMap<hkStringMapOperations> StringHashMap;

extern "C" int fn_82E09328(char *self, void *param_2, hkUlong param_3)
{
  unsigned int iVar1;

  iVar1 = reinterpret_cast<const StringHashMap *>(self + 8)->getWithDefault(hkUlong(param_3), hkUlong(0));
  if ((iVar1 != 0) && (*(int (***)(void *))(iVar1 + 8) != 0)) {
    (*(int (**)(void *))(iVar1 + 8))(param_2);
  }
  return iVar1;
}
