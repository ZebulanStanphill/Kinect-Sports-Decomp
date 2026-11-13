void fn_82BBFD90(int param_1,int param_2)

{
  unsigned int iVar1;
  
  iVar1 = *(int *)(param_2 + 4);
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 8) = param_1;
  }
  *(int *)(param_1 + 8) = param_2;
  *(int *)(param_2 + 4) = param_1;
  return;
}

