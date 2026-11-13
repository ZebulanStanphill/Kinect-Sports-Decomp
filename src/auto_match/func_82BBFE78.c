void fn_82BBFE78(int param_1,int param_2)

{
  unsigned int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  *(int *)(param_2 + 8) = iVar1;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 4) = param_2;
  }
  *(int *)(param_2 + 4) = param_1;
  *(int *)(param_1 + 8) = param_2;
  return;
}

