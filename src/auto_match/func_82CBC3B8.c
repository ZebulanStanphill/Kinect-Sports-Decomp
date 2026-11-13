void fn_82CBC3B8(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 0xd40);
  uVar1 = *(unsigned int *)(param_1 + 0xd4);
  if (iVar3 == 1) {
    *(unsigned int *)(param_1 + 0x3bb8) = uVar1;
    return;
  }
  uVar2 = ((int)uVar1 >> 2) + (unsigned int)((int)uVar1 < 0 && (uVar1 & 3) != 0);
  if (iVar3 == 2) {
    uVar2 = uVar2 + 1;
    *(unsigned int *)(param_1 + 0x3bbc) = uVar1;
    *(unsigned int *)(param_1 + 0x3bb8) =
         (((int)uVar2 >> 1) + (unsigned int)((int)uVar2 < 0 && (uVar2 & 1) != 0)) * 4;
    return;
  }
  if (iVar3 != 4) {
    return;
  }
  iVar4 = ((int)uVar2 >> 2) + (unsigned int)((int)uVar2 < 0 && (uVar2 & 3) != 0);
  *(int *)(param_1 + 0x3bc0) = iVar4;
  *(int *)(param_1 + 0x3bbc) = iVar4;
  iVar3 = uVar2 + iVar4 * -4;
  *(int *)(param_1 + 0x3bb8) = iVar4;
  if (iVar3 != 1) {
    if (iVar3 == 2) {
      *(int *)(param_1 + 0x3bbc) = iVar4 + 1;
    }
    else {
      if (iVar3 != 3) goto LAB_82cbc45c;
      *(int *)(param_1 + 0x3bbc) = iVar4 + 1;
      *(int *)(param_1 + 0x3bc0) = iVar4 + 1;
    }
  }
  *(int *)(param_1 + 0x3bb8) = iVar4 + 1;
LAB_82cbc45c:
  iVar3 = *(int *)(param_1 + 0x3bb8) * 4;
  *(int *)(param_1 + 0x3bb8) = iVar3;
  iVar3 = *(int *)(param_1 + 0x3bbc) * 4 + iVar3;
  *(int *)(param_1 + 0x3bbc) = iVar3;
  *(int *)(param_1 + 0x3bc0) = *(int *)(param_1 + 0x3bc0) * 4 + iVar3;
  return;
}

