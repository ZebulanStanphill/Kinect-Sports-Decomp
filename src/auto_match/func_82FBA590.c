typedef unsigned char bool;
extern unsigned int lbl_821AAD20;


unsigned __int64 fn_82FBA590(int param_1,short param_2,float *param_3)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  
  if (param_3 != (float *)0x0) {
    uVar2 = 1;
    uVar1 = (int)param_2 / 5;
    lVar3 = (__int64)(int)uVar1;
    switch(param_2) {
    case 0:
    case 5:
    case 10:
      *(int *)((int)((lVar3 + ((unsigned __int64)uVar1 & 0x3fffffff) * 4 & 0xffffffff) << 2) + param_1 + 4)
           = (int)*param_3;
      *(unsigned char *)(uVar1 + param_1 + 0x48) = 1;
      return uVar2;
    case 1:
    case 6:
    case 0xb:
      *(float *)((int)((lVar3 + ((unsigned __int64)uVar1 & 0x3fffffff) * 4 & 0xffffffff) << 2) + param_1 +
                8) = *param_3;
      *(unsigned char *)(uVar1 + param_1 + 0x48) = 1;
      return uVar2;
    case 2:
    case 7:
    case 0xc:
      *(float *)((int)((lVar3 + ((unsigned __int64)uVar1 & 0x3fffffff) * 4 & 0xffffffff) << 2) + param_1 +
                0xc) = *param_3;
      *(unsigned char *)(uVar1 + param_1 + 0x48) = 1;
      return uVar2;
    case 3:
    case 8:
    case 0xd:
      *(float *)((int)((lVar3 + ((unsigned __int64)uVar1 & 0x3fffffff) * 4 & 0xffffffff) << 2) + param_1 +
                0x10) = *param_3;
      *(unsigned char *)(uVar1 + param_1 + 0x48) = 1;
      return uVar2;
    case 4:
    case 9:
    case 0xe:
      *(bool *)((int)((lVar3 + 1U + (lVar3 + 1U & 0x3fffffff) * 4 & 0xffffffff) << 2) + param_1) =
           *param_3 != lbl_821AAD20;
      *(unsigned char *)(uVar1 + param_1 + 0x48) = 1;
      return uVar2;
    case 0xf:
      *(float *)(param_1 + 0x40) = *param_3;
      return uVar2;
    case 0x10:
      *(unsigned char *)(param_1 + 0x44) = *(unsigned char *)param_3;
      return uVar2;
    }
  }
  return 0x1f;
}

