void fn_82F6FDB0(short *param_1,int param_2,unsigned __int64 param_3)

{
  short sVar1;
  short *psVar2;
  short *psVar3;
  
  if ((param_3 & 0xffffffff) == 0) {
    return;
  }
  psVar2 = param_1;
  do {
    psVar3 = psVar2;
    sVar1 = *(short *)((param_2 - (int)param_1) + (int)psVar3);
    *psVar3 = sVar1;
    if (sVar1 == 0) break;
    param_3 = param_3 - 1;
    psVar2 = psVar3 + 1;
  } while (param_3 != 0);
  if ((param_3 & 0xffffffff) == 0) {
    return;
  }
  param_3 = param_3 - 1;
  if (param_3 != 0) {
    if ((param_3 & 0xffffffff) != 0) {
      do {
        psVar3 = psVar3 + 1;
        *psVar3 = 0;
        param_3 = param_3 - 1;
      } while (param_3 != 0);
      return;
    }
    return;
  }
  return;
}

