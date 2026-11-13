unsigned __int64 fn_82FAE338(int param_1,int param_2,int param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0xa0) + 4);
  iVar2 = *(int *)(*(int *)(param_1 + 0xa4) + -4);
  *param_5 = param_4;
  iVar2 = iVar2 - iVar1;
  while (param_4 < param_2) {
    if (iVar2 < *param_5) {
      return 2;
    }
    param_4 = *param_5 + param_3;
    *param_5 = param_4;
  }
  if (iVar2 < *param_5) {
    return 2;
  }
  return 1;
}

