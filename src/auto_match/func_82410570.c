void fn_82410570(int param_1)

{
  unsigned int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 == 0) {
    return;
  }
  *(int *)(iVar1 + 0x7d8) = *(int *)(iVar1 + 0x7d8) + 1;
  *(unsigned int *)(param_1 + 0x284) = 0;
  return;
}

