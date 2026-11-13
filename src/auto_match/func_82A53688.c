unsigned __int64 fn_82A53688(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2;
  if ((*(int *)(param_1 + 0x13c) != 0) && (0 < iVar1)) {
    return (param_2 & 0x7fffffff) << 1;
  }
  if (*(int *)(param_1 + 0x144) == 0) {
    return param_2;
  }
  if (iVar1 < 1) {
    return param_2;
  }
  return (__int64)
         ((*(int *)(param_1 + 0x14c) * iVar1 - *(int *)(param_1 + 0x154)) /
         *(int *)(param_1 + 0x148)) + 1;
}

