void fn_826A1FC8(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  int iVar6;
  
  iVar3 = 0;
  uVar4 = (unsigned __int64)*(unsigned int *)(param_1 + 0x38) - 1;
  if ((__int64)uVar4 < 1) {
    return;
  }
  iVar6 = 0;
  lVar5 = (uVar4 & 0x3fffffff) << 2;
  do {
    iVar1 = *(int *)(param_1 + 0x34);
    iVar3 = iVar3 + 1;
    uVar4 = uVar4 - 1;
    uVar2 = *(unsigned int *)(iVar6 + iVar1);
    *(unsigned int *)(iVar6 + iVar1) = *(unsigned int *)((int)lVar5 + iVar1);
    iVar6 = iVar6 + 4;
    *(unsigned int *)((int)lVar5 + iVar1) = uVar2;
    lVar5 = lVar5 + -4;
  } while (iVar3 < (int)uVar4);
  return;
}

