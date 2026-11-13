unsigned __int64 fn_82967DD8(int param_1,int param_2,int param_3,unsigned int param_4,unsigned int param_5)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_2 * 4 + *(int *)(param_1 + 0x14));
  uVar1 = *(unsigned int *)(iVar2 + 0x48);
  if (uVar1 == 0xffffffff) {
    return 1;
  }
  if ((param_4 <= uVar1) && (uVar1 < param_5)) {
    iVar3 = *(int *)(**(int **)(param_3 + 0x10) * 4 + *(int *)(param_1 + 0x14));
    iVar4 = *(int *)(iVar3 + 0x14);
    iVar3 = *(int *)(iVar3 + 0x18);
    if (iVar4 != -1) {
      do {
        if (iVar4 == *(int *)(iVar2 + 0x14)) break;
        iVar3 = *(int *)(iVar4 * 4 + *(int *)(param_1 + 0x14));
        iVar4 = *(int *)(iVar3 + 0x14);
        iVar3 = *(int *)(iVar3 + 0x18);
      } while (iVar4 != -1);
    }
    if ((iVar4 == *(int *)(iVar2 + 0x14)) && (iVar3 == *(int *)(iVar2 + 0x18))) {
      return 1;
    }
  }
  return 0;
}

