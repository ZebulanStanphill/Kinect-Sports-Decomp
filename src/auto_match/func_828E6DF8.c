typedef unsigned char bool;
#define true 1
#define false 0


bool fn_828E6DF8(unsigned __int64 param_1,unsigned int *param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  bool bVar4;
  
  uVar1 = *param_2;
  uVar2 = *param_3;
  if (uVar1 == uVar2) {
    if (uVar1 == 1) {
      uVar3 = ((~(unsigned __int64)(param_3[2] ^ param_2[2]) & 0xffffffff) >> 0x1f) +
              (unsigned __int64)(param_3[2] <= param_2[2]) & 1;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = ((~(unsigned __int64)(uVar2 ^ uVar1) & 0xffffffff) >> 0x1f) + (unsigned __int64)(uVar2 <= uVar1) & 1;
  }
  if (uVar3 != 0) {
    return false;
  }
  if (uVar2 == uVar1) {
    if (uVar2 != 1) {
      return true;
    }
    bVar4 = param_2[2] <= param_3[2];
    uVar1 = param_2[2] ^ param_3[2];
  }
  else {
    bVar4 = uVar1 <= uVar2;
    uVar1 = uVar1 ^ uVar2;
  }
  return ((int)((~(unsigned __int64)uVar1 & 0xffffffff) >> 0x1f) + (unsigned int)bVar4 & 1) == 0;
}

