void fn_82A6CD50(int param_1,unsigned int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  
  uVar1 = *(unsigned int *)(param_1 + 0x20);
  iVar3 = **(int **)(param_1 + 8);
  if (*(int *)(iVar3 + 0x3c) < 3) {
    if (*(int *)(iVar3 + 0xd4) == 0) {
      uVar2 = 0;
      goto LAB_82a6cdb4;
    }
    uVar2 = *(int *)(iVar3 + 8) + 0xb;
  }
  else if (*(int *)(iVar3 + 0x25c) == 0) {
    uVar2 = *(int *)(iVar3 + 8) + 6;
  }
  else {
    uVar2 = *(int *)(iVar3 + 8) + 0x11;
  }
  uVar2 = uVar2 & 0xff;
LAB_82a6cdb4:
  if (uVar2 == ((int)uVar2 >> 3) << 3) {
    return;
  }
  uVar2 = *(int *)(param_1 + 0x30) + uVar1 * 8 + *(int *)(param_1 + 0x28);
  *(unsigned int *)(param_1 + 0x50) = *(unsigned int *)(param_1 + 0x18);
  if (((uVar2 ^ param_2) & 7) != 0) {
    return;
  }
  if (uVar2 <= param_2) {
    *(unsigned int *)(param_1 + 0x44) = 1;
    *(unsigned int *)(param_1 + 0x48) = param_2 - uVar2 >> 3;
    return;
  }
  uVar2 = uVar2 - param_2 >> 3;
  if (uVar2 <= uVar1) {
    *(unsigned int *)(param_1 + 0x20) = uVar1 - uVar2;
    return;
  }
  iVar3 = uVar2 - uVar1;
  *(unsigned int *)(param_1 + 0x20) = 0;
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) - iVar3;
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + iVar3 * -8;
  *(unsigned int *)(param_1 + 0x24) = *(unsigned int *)(param_1 + 0x24) >> (iVar3 * 8 & 0x38U);
  return;
}

