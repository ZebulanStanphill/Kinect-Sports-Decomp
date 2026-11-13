unsigned __int64 fn_82FAE1F0(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  unsigned int uVar5;
  
  iVar1 = *(int *)(param_1 + 0xa0);
  uVar5 = 1;
  iVar2 = *(int *)(param_1 + 0xa4) - iVar1 >> 3;
  if (iVar2 != 2) {
    iVar4 = 8;
    iVar3 = iVar1 + 8;
    do {
      if ((unsigned int)(*(int *)(iVar1 + 4) + param_2) < *(unsigned int *)(iVar3 + 4)) {
        *param_3 = *(int *)(uVar5 * 8 + *(int *)(param_1 + 0xa0) + 4) -
                   *(int *)(*(int *)(param_1 + 0xa0) + 4);
        return 1;
      }
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + 8;
      iVar3 = iVar4 + iVar1;
    } while (uVar5 <= iVar2 - 2U);
  }
  return 2;
}

