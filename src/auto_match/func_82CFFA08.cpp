#include "havok/hkString.h"

extern "C" int fn_82CE5410(...);

extern "C" void fn_82CFFA08(int *param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar4;
  unsigned int uVar3;
  
  uVar1 = *param_3 & 0xfffffffe;
  if ((*param_3 & 0xfffffffe) != 0) {
    uVar2 = hkString::strLen(reinterpret_cast<const char *>(uVar1));
    iVar4 = fn_82CE5410();
    uVar3 = (*(unsigned int (**)(int *, unsigned int, unsigned int))(**(int **)(iVar4 + 0x10) + 0x2c))(*(int **)(iVar4 + 0x10),uVar1,uVar2);
    (*(void (**)(int *, int, unsigned __int64, unsigned int, unsigned int, unsigned int))(*param_1 + 0x14))(param_1,3,param_2,uVar1,uVar2,uVar3);
  }
  return;
}

