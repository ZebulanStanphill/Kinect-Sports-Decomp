extern int fn_822ABA88();


int fn_82372C00(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  
  lVar5 = 0;
  uVar1 = **(unsigned int **)(param_1 + 8);
  iVar2 = (int)((*(unsigned int **)(param_1 + 8))[1] - uVar1) >> 2;
  if (0 < iVar2) {
    uVar6 = (unsigned __int64)uVar1;
    do {
      uVar4 = 0;
      uVar1 = *(unsigned int *)(((int *)*(int *)uVar6)[4] * 4 + *(int *)*(int *)uVar6);
      uVar8 = (unsigned __int64)uVar1;
      uVar7 = (unsigned __int64)*(unsigned int *)(uVar1 + 8);
      if (uVar7 != 0) {
        do {
          iVar3 = fn_822ABA88(uVar8);
          if (*(int *)(iVar3 + 0x120) != 0) {
            return iVar3;
          }
          uVar4 = uVar4 + 1;
        } while ((uVar4 & 0xffffffff) < (uVar7 & 0xffffffff));
      }
      lVar5 = lVar5 + 1;
      uVar6 = uVar6 + 4;
    } while ((int)lVar5 < iVar2);
  }
  return 0;
}

