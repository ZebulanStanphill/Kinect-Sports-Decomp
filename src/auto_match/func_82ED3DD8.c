void fn_82ED3DD8(int param_1,int param_2)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  iVar4 = *(int *)(param_1 + 0x18);
  iVar3 = 0;
  iVar1 = iVar4;
  do {
    if (*(int *)(iVar1 + 0x10) == param_2) {
      iVar4 = uVar2 * 0x402c + iVar4;
      if (iVar4 == 0) {
        return;
      }
      *(unsigned int *)(iVar4 + 0x14) = 1;
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
      return;
    }
    uVar2 = uVar2 + 1;
    iVar3 = iVar3 + 0x402c;
    iVar1 = iVar3 + iVar4;
  } while (uVar2 < *(unsigned int *)(param_1 + 0x1c));
  return;
}

