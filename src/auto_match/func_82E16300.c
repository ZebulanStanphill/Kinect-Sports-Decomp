void fn_82E16300(int param_1,int param_2)

{
  unsigned int uVar1;
  int iVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  int iVar6;
  __int64 lVar5;
  __int64 lVar7;
  
  uVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0x50) - 1;
  if ((__int64)uVar3 < 0) {
    return;
  }
  lVar4 = (uVar3 & 0x1fffffff) << 3;
  do {
    if (*(int *)(*(int *)(param_1 + 0x4c) + (int)lVar4 + 4) == param_2) {
      iVar6 = *(int *)(param_1 + 0x50) + -1;
      *(int *)(param_1 + 0x50) = iVar6;
      if (iVar6 != (int)uVar3) {
        uVar1 = *(unsigned int *)(param_1 + 0x4c);
        lVar5 = lVar4 + (unsigned __int64)uVar1;
        iVar2 = (int)lVar5;
        lVar7 = 2;
        do {
          *(unsigned int *)lVar5 =
               *(unsigned int *)(((iVar6 * 8 + uVar1) - iVar2) + (int)(unsigned int *)lVar5);
          lVar5 = lVar5 + 4;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
    }
    uVar3 = uVar3 - 1;
    lVar4 = lVar4 + -8;
  } while (-1 < (__int64)uVar3);
  return;
}

