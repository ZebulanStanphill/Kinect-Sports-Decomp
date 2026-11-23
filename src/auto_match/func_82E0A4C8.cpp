#include "havok/hkMap.h"

typedef hkCachedHashMap<hkStringMapOperations> StringHashMap;

extern "C" int fn_82CEA220(void *, unsigned int);
extern "C" int fn_82CEA280(void *, unsigned int, int);
extern "C" int fn_82CEA358(void *, unsigned int);
extern "C" void fn_82E0A4C8(char *param_1, unsigned int param_2)
{
  unsigned int uVar1;
  unsigned int iVar3;
  unsigned int uVar2;
  void *iVar4;

  iVar4 = param_1 + 0x10;
  uVar1 = fn_82CEA280(iVar4,param_2,0);
  if (uVar1 != 0) {
    iVar3 = reinterpret_cast<const StringHashMap *>(param_1 + 0x1c)->getWithDefault(hkUlong(uVar1), hkUlong(0));
    if (*(int (**)(unsigned int))(iVar3 + 8) != 0) {
      (*(int (**)(unsigned int))(iVar3 + 8))(param_2);
    }
    if (*(unsigned int *)(param_1 + 8) == param_2) {
      *(unsigned int *)(param_1 + 8) = 0;
    }
    uVar2 = fn_82CEA220(iVar4,param_2);
    fn_82CEA358(iVar4,uVar2);
  }
  return;
}
