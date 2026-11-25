#include "havok/hkString.h"

extern "C" int fn_82CE5410(...);
extern "C" int fn_82D05808(...);

extern "C" void fn_82D05468(unsigned __int64 param_1,const char *param_2,unsigned int param_3)

{
  int iVar1;
  
  if ((int)param_3 < 0) {
    param_3 = hkString::strLen(param_2);
  }
  iVar1 = fn_82CE5410();
  fn_82D05808(param_1,*(unsigned int *)(iVar1 + 0xc),0,0,param_2,param_3);
  return;
}

