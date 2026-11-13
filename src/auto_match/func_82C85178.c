void fn_82C85178(short *param_1,__int64 param_2,unsigned int *param_3)

{
  short sVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  short sVar4;
  
  uVar2 = *param_3;
  uVar3 = param_3[1];
  *param_1 = (short)param_3[4] * *param_1;
  if ((int)param_2 < 2) {
    return;
  }
  param_2 = param_2 + -1;
  do {
    param_1 = param_1 + 1;
    sVar1 = *param_1;
    if (sVar1 != 0) {
      sVar4 = sVar1 * (short)uVar2;
      if (sVar1 < 1) {
        *param_1 = sVar4 - (short)uVar3;
      }
      else {
        *param_1 = sVar4 + (short)uVar3;
      }
    }
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}

