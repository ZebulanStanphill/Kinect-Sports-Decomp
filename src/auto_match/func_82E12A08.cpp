#include "havok/hkString.h"

extern "C" int fn_82E0E658(...);


extern "C" bool fn_82E12A08(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  
  uVar1 = fn_82E0E658();
  iVar2 = hkString::strCmp(reinterpret_cast<const char *>(*(unsigned int *)(param_1 + 0x14)), reinterpret_cast<const char *>(uVar1));
  return iVar2 == 0;
}

