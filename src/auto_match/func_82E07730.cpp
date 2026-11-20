#include "havok/hkString.h"

extern "C" {



int  fn_82E07730(int param_1,const char *param_2)

{
  int iVar1;
  int lVar2;
  int iVar3;
  
  lVar2 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    iVar3 = 0;
    do {
      iVar1 = hkString::strCasecmp((const char *)(*(unsigned int *)(iVar3 + *(int *)(param_1 + 4)) & 0xfffffffe), (const char *)(param_2));
      if (iVar1 == 0) {
        return lVar2;
      }
      lVar2 = lVar2 + 1;
      iVar3 = iVar3 + 8;
    } while ((int)lVar2 < *(int *)(param_1 + 8));
  }
  return -1;
}

}
