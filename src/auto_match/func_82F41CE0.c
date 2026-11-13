#define true 1


unsigned __int64 fn_82F41CE0(unsigned short *param_1,unsigned short *param_2)

{
  unsigned short uVar1;
  unsigned short uVar2;
  unsigned short uVar3;
  
  uVar1 = *param_1;
  while( true ) {
    if (uVar1 == 0) break;
    uVar2 = *param_2;
    if (uVar1 != uVar2) {
      uVar3 = uVar1;
      if ((0x60 < uVar1) && (uVar1 < 0x7b)) {
        uVar3 = uVar1 & 0xffdf;
      }
      if ((0x60 < uVar2) && (uVar2 < 0x7b)) {
        uVar2 = uVar2 & 0xffdf;
      }
      if (uVar3 != uVar2) break;
    }
    param_1 = param_1 + 1;
    uVar1 = *param_1;
    param_2 = param_2 + 1;
  }
  if ((uVar1 == 0) && (*param_2 == 0)) {
    return 1;
  }
  return 0;
}

