void fn_829BB528(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  
  iVar1 = *(int *)(param_1 + 0x1b0);
  if (1 < *(int *)(param_1 + 0x14c)) {
    *(unsigned int *)(iVar1 + 0x1c) = 1;
    *(unsigned int *)(iVar1 + 0x14) = 0;
    *(unsigned int *)(iVar1 + 0x18) = 0;
    return;
  }
  if (*(unsigned int *)(param_1 + 0x98) < *(int *)(param_1 + 0x144) - 1U) {
    uVar2 = *(unsigned int *)(*(int *)(param_1 + 0x150) + 0xc);
    *(unsigned int *)(iVar1 + 0x14) = 0;
    *(unsigned int *)(iVar1 + 0x18) = 0;
    *(unsigned int *)(iVar1 + 0x1c) = uVar2;
    return;
  }
  uVar2 = *(unsigned int *)(*(int *)(param_1 + 0x150) + 0x48);
  *(unsigned int *)(iVar1 + 0x14) = 0;
  *(unsigned int *)(iVar1 + 0x18) = 0;
  *(unsigned int *)(iVar1 + 0x1c) = uVar2;
  return;
}

