#include "havok/hkString.h"

extern "C" int fn_82CE5410(...);
extern "C" int fn_82D05808(...);


extern "C" int fn_82D04C78(int param_1,const char *param_2)

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  int iVar3;
  
  uVar2 = hkString::strLen(param_2);
  uVar1 = *(unsigned int *)(param_1 + 4);
  iVar3 = fn_82CE5410();
  fn_82D05808(param_1,*(unsigned int *)(iVar3 + 0xc),(unsigned __int64)uVar1 - 1,0,param_2,uVar2);
  return param_1;
}

