unsigned __int64 fn_82BE5240(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2;
  *(int *)(param_1 + 4) = iVar1;
  if (*(int *)(param_1 + 8) != iVar1) {
    *(int *)(param_1 + 8) = iVar1;
  }
  return param_2;
}

