void fn_82A6E290(int param_1,int param_2,short param_3,short param_4,short param_5,short *param_6,
                  short *param_7)

{
  short sVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  
  if (param_4 < param_3) {
    uVar3 = (int)param_3 - (int)param_4;
    uVar2 = (int)param_4 + (int)param_3;
    *param_6 = (short)((int)uVar3 >> 1) + (unsigned short)((int)uVar3 < 0 && (uVar3 & 1) != 0) + param_5;
    sVar1 = (short)((int)uVar2 >> 1) + (unsigned short)((int)uVar2 < 0 && (uVar2 & 1) != 0) + param_5;
  }
  else {
    sVar1 = param_5 << 1;
    *param_6 = param_5;
  }
  *param_7 = sVar1;
  if (param_2 != 1) {
    if (*(int *)(param_1 + 0x8c) != 1) {
      return;
    }
    if (*(int *)(param_1 + 0x94) != 0) {
      return;
    }
    uVar2 = (int)*param_6 + (int)*param_7;
    sVar1 = (short)((int)uVar2 >> 1) + (unsigned short)((int)uVar2 < 0 && (uVar2 & 1) != 0);
    *param_6 = sVar1;
    *param_7 = sVar1;
    return;
  }
  if (*(int *)(param_1 + 0x8c) != 1) {
    return;
  }
  if (*(int *)(param_1 + 0x9c) != 0) {
    return;
  }
  uVar2 = (int)*param_6 + (int)*param_7;
  sVar1 = (short)((int)uVar2 >> 1) + (unsigned short)((int)uVar2 < 0 && (uVar2 & 1) != 0);
  *param_6 = sVar1;
  *param_7 = sVar1;
  return;
}

