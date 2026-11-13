void fn_82F11170(short *param_1,short *param_2,unsigned __int64 param_3,unsigned int *param_4)

{
  short sVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  short sVar5;
  __int64 lVar6;
  
  uVar2 = *param_4;
  uVar3 = param_4[1];
  *param_2 = (short)param_4[10] * *param_1;
  if ((param_3 & 0xffffffff) < 2) {
    return;
  }
  lVar6 = param_3 - 1;
  iVar4 = (int)param_1 - (int)param_2;
  do {
    param_2 = param_2 + 1;
    sVar1 = *(short *)(iVar4 + (int)param_2);
    if (sVar1 == 0) {
      *param_2 = 0;
    }
    else {
      sVar5 = sVar1 * (short)uVar2;
      if (sVar1 < 0) {
        *param_2 = sVar5 - (short)uVar3;
      }
      else {
        *param_2 = sVar5 + (short)uVar3;
      }
    }
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  return;
}

