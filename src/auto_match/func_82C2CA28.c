void fn_82C2CA28(int param_1,short param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x1bc) != 0) {
    *(int *)(param_1 + 0x1d0) = *(int *)(param_1 + 0xfc) >> (*(unsigned int *)(param_1 + 0x1c8));
    *(int *)(param_1 + 0x1d4) = *(int *)(param_1 + 0x100) >> (*(unsigned int *)(param_1 + 0x1c8));
    iVar1 = param_2;
    if (*(int *)(param_1 + 0x10c) < param_2) {
      iVar1 = *(int *)(param_1 + 0x10c);
    }
    *(int *)(param_1 + 0x1d8) = iVar1;
    return;
  }
  if (*(int *)(param_1 + 0x1c0) != 0) {
    *(int *)(param_1 + 0x1d0) = *(int *)(param_1 + 0xfc) << (*(unsigned int *)(param_1 + 0x1c8));
    *(int *)(param_1 + 0x1d4) = *(int *)(param_1 + 0x100) << (*(unsigned int *)(param_1 + 0x1c8));
    *(unsigned int *)(param_1 + 0x1d8) = *(unsigned int *)(param_1 + 0x10c);
    return;
  }
  *(unsigned int *)(param_1 + 0x1d0) = *(unsigned int *)(param_1 + 0xfc);
  *(unsigned int *)(param_1 + 0x1d4) = *(unsigned int *)(param_1 + 0x100);
  *(unsigned int *)(param_1 + 0x1d8) = *(unsigned int *)(param_1 + 0x10c);
  return;
}

