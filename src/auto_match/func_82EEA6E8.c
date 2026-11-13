unsigned __int64 fn_82EEA6E8(int param_1,unsigned int *param_2)

{
  int iVar1;
  unsigned int iVar2;
  
  if (*(unsigned int **)(param_1 + 0x5c) == (unsigned int *)0x0) {
    return 0;
  }
  *param_2 = **(unsigned int **)(param_1 + 0x5c);
  iVar1 = *(int *)(param_1 + 0x5c);
  iVar2 = *(int *)(iVar1 + 4);
  *(unsigned int *)(iVar1 + 4) = *(unsigned int *)(param_1 + 4);
  *(int *)(param_1 + 4) = iVar1;
  *(int *)(param_1 + 0x5c) = iVar2;
  if (iVar2 == 0) {
    *(unsigned int *)(param_1 + 0x60) = 0;
  }
  *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + -1;
  return 1;
}

