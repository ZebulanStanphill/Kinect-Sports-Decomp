__int64 fn_8268DB68(unsigned int *param_1,unsigned int param_2,int param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned short *puVar4;
  unsigned int uVar5;
  __int64 lVar6;
  
  iVar3 = ((param_2 >> 4) + 6) * 2;
  uVar1 = param_3 + 7U & 0xfffffff8;
  uVar5 = (unsigned int)*(unsigned short *)(iVar3 + (int)param_1);
  if (uVar5 == 0xffff) {
    if (param_1[1] < param_1[2] + 0x20) {
      return 0;
    }
    uVar2 = param_1[2] >> 3;
    uVar5 = uVar2 & 0xffff;
    *(short *)(iVar3 + (int)param_1) = (short)uVar2;
    lVar6 = 0x10;
    puVar4 = (unsigned short *)(param_1[2] + *param_1 + -2);
    do {
      puVar4 = puVar4 + 1;
      *puVar4 = 0xffff;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    param_1[2] = param_1[2] + 0x20;
  }
  if (param_1[1] < param_1[2] + uVar1) {
    return 0;
  }
  *(short *)((uVar5 * 4 + (param_2 & 0xf)) * 2 + *param_1) = (short)(param_1[2] >> 3);
  uVar5 = param_1[2];
  param_1[2] = uVar5 + uVar1;
  return (unsigned __int64)uVar5 + (unsigned __int64)*param_1;
}

