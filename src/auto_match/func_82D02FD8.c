int fn_82D02FD8(int param_1,unsigned int param_2)

{
  int iVar1;
  unsigned int uVar2;
  
  iVar1 = *(int *)(param_1 + 0x10);
  uVar2 = *(int *)(param_1 + 0x14) - param_2;
  *(unsigned int *)(param_1 + 0x14) = uVar2;
  *(unsigned int *)(param_1 + 0x10) = iVar1 + param_2;
  *(unsigned int *)(param_1 + 0xbc) = param_2 + *(int *)(param_1 + 0xbc);
  *(unsigned int *)(param_1 + 0xc0) = param_2 + *(int *)(param_1 + 0xc0) + -0x10;
  *(unsigned int *)(iVar1 + param_2 + 4) = uVar2 | 1;
  *(unsigned int *)(iVar1 + param_2) = param_2;
  *(unsigned int *)(iVar1 + 4) = param_2 | 3;
  return iVar1 + 0x10;
}

