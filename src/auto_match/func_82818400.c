#define true 1


unsigned __int64 fn_82818400(unsigned short *param_1)

{
  unsigned short uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  
  uVar1 = *param_1;
  uVar3 = 0;
  while( true ) {
    if ((unsigned __int64)uVar1 == 0) break;
    param_1 = param_1 + 1;
    uVar3 = (uVar3 & 0xfffffff) * 0x10 + (unsigned __int64)uVar1;
    uVar2 = uVar3 & 0xf0000000;
    if (uVar2 != 0) {
      uVar3 = (uVar2 >> 0x18 | uVar2) ^ uVar3;
    }
    uVar1 = *param_1;
  }
  return uVar3;
}

