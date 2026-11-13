void fn_82F117F0(int param_1,short *param_2,short *param_3,unsigned __int64 param_4,int param_5)

{
  short sVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  short sVar5;
  __int64 lVar6;
  unsigned int *puVar7;
  
  puVar7 = (unsigned int *)(*(int *)(param_1 + 0x6d24) + param_5 * 0x34);
  uVar2 = *puVar7;
  uVar3 = puVar7[1];
  *param_3 = (short)puVar7[10] * *param_2;
  if ((param_4 & 0xffffffff) < 2) {
    return;
  }
  lVar6 = param_4 - 1;
  iVar4 = (int)param_2 - (int)param_3;
  do {
    param_3 = param_3 + 1;
    sVar1 = *(short *)(iVar4 + (int)param_3);
    if (sVar1 == 0) {
      *param_3 = 0;
    }
    else {
      sVar5 = sVar1 * (short)uVar2;
      if (sVar1 < 0) {
        *param_3 = sVar5 - (short)uVar3;
      }
      else {
        *param_3 = sVar5 + (short)uVar3;
      }
    }
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  return;
}

