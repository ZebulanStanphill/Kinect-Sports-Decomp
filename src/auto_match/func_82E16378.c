void fn_82E16378(int param_1,int param_2)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  __int64 lVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  
  uVar5 = (unsigned __int64)*(unsigned int *)(param_1 + 0x5c) - 1;
  if ((__int64)uVar5 < 0) {
    return;
  }
  lVar4 = (uVar5 & 0x1fffffff) * 8 + (unsigned __int64)*(unsigned int *)(param_1 + 0x58) + 4;
  do {
    if (*(int *)lVar4 == param_2) {
      iVar3 = *(int *)(param_1 + 0x5c) + -1;
      *(int *)(param_1 + 0x5c) = iVar3;
      if (iVar3 == (int)uVar5) {
        return;
      }
      uVar1 = *(unsigned int *)(param_1 + 0x58);
      lVar4 = (uVar5 & 0x1fffffff) * 8 + (unsigned __int64)uVar1;
      iVar2 = (int)lVar4;
      lVar6 = 2;
      do {
        *(unsigned int *)lVar4 =
             *(unsigned int *)(((iVar3 * 8 + uVar1) - iVar2) + (int)(unsigned int *)lVar4);
        lVar4 = lVar4 + 4;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      return;
    }
    uVar5 = uVar5 - 1;
    lVar4 = lVar4 + -8;
  } while (-1 < (__int64)uVar5);
  return;
}

