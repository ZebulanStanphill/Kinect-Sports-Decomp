#include "havok/hkString.h"

extern "C" {



unsigned __int64 fn_82E08B58(int param_1,const char *param_2,unsigned int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    iVar3 = 0;
    do {
      iVar1 = hkString::strCasecmp((const char *)(param_2), (const char *)(*(unsigned int *)(iVar3 + *(int *)(param_1 + 8) + 4) & 0xfffffffe));
      if (iVar1 == 0) {
        *param_3 = *(unsigned int *)(iVar2 * 8 + *(int *)(param_1 + 8));
        return 0;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 8;
    } while (iVar2 < *(int *)(param_1 + 0xc));
  }
  return 1;
}

}
