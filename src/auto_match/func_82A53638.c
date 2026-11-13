void fn_82A53638(int param_1,__int64 param_2,__int64 param_3)

{
  int iVar1;
  int iVar2;
  __int64 lVar3;
  int iVar4;
  
  iVar2 = (int)param_3;
  iVar1 = (int)param_2;
  *(int *)(param_1 + 0x148) = iVar1;
  *(int *)(param_1 + 0x14c) = iVar2;
  if (0 < iVar1) {
    do {
      lVar3 = param_2;
      if ((int)param_2 < (int)param_3) {
        lVar3 = param_3;
        param_3 = param_2;
      }
      param_2 = lVar3 - param_3;
    } while (0 < param_2);
  }
  iVar4 = (int)param_3;
  if (iVar4 == 0) {
    return;
  }
  *(int *)(param_1 + 0x148) = iVar1 / iVar4;
  *(int *)(param_1 + 0x14c) = iVar2 / iVar4;
  return;
}

