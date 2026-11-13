#define true 1


__int64 fn_82526A20(unsigned char *param_1,int param_2)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  
  param_2 = param_2 - (int)param_1;
  while( true ) {
    uVar2 = (unsigned __int64)*param_1;
    if (0x20 < uVar2) {
      uVar2 = uVar2 & 0xdf;
    }
    uVar1 = (unsigned __int64)param_1[param_2];
    if (0x20 < uVar1) {
      uVar1 = uVar1 & 0xdf;
    }
    if (uVar2 != uVar1) break;
    param_1 = param_1 + 1;
    if (uVar2 == 0) {
      return 0;
    }
  }
  return uVar2 - uVar1;
}

