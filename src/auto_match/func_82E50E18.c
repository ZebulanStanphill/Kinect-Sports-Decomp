void fn_82E50E18(int param_1,unsigned int *param_2,unsigned int *param_3)

{
  int iVar1;
  
  if (*(unsigned int *)(param_1 + 0x2c) > 0) {
    *param_2 = *(unsigned int *)(param_1 + 0x1c);
    *param_3 = 1;
    *(unsigned int *)(param_1 + 0x34) = 1;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
    return;
  }
  if (*(unsigned int *)(param_1 + 0x24) > 0) {
    *param_2 = *(unsigned int *)(param_1 + 0x20);
    *param_3 = *(unsigned int *)(param_1 + 0x24);
    iVar1 = *(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x24);
    *(unsigned int *)(param_1 + 0x24) = 0;
    *(int *)(param_1 + 0x28) = iVar1;
    return;
  }
  *param_2 = 0;
  *param_3 = 0;
  return;
}

