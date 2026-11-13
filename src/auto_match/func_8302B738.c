void fn_8302B738(int param_1,unsigned int param_2)

{
  int iVar1;
  unsigned __int64 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = (unsigned __int64)param_2 * 0x8421085 >> 0x20;
  uVar2 = ((param_2 - uVar2 & 0xffffffff) >> 1) + uVar2 >> 4;
  iVar3 = (int)(((unsigned __int64)param_2 - ((uVar2 & 0x7ffffff) * 0x20 - uVar2) & 0xffffffff) << 2);
  iVar1 = *(int *)(iVar3 + param_1);
  iVar5 = 0;
  if (iVar1 == 0) {
    return;
  }
  do {
    iVar4 = iVar1;
    if (*(unsigned int *)(iVar4 + 4) == param_2) {
      if (iVar5 != 0) {
        *(unsigned int *)(iVar5 + 8) = *(unsigned int *)(iVar4 + 8);
        *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + -1;
        return;
      }
      *(unsigned int *)(iVar3 + param_1) = *(unsigned int *)(iVar4 + 8);
      *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + -1;
      return;
    }
    iVar1 = *(int *)(iVar4 + 8);
    iVar5 = iVar4;
  } while (*(int *)(iVar4 + 8) != 0);
  return;
}

