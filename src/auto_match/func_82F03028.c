void fn_82F03028(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10) * 0xc + param_1;
  *(unsigned int *)(param_1 + 0x1d84) = *(unsigned int *)(iVar1 + 0x1ce4);
  *(unsigned int *)(param_1 + 0x1d88) = *(unsigned int *)(iVar1 + 0x1ce8);
  *(unsigned int *)(param_1 + 0x1d8c) = *(unsigned int *)(iVar1 + 0x1cec);
  return;
}

