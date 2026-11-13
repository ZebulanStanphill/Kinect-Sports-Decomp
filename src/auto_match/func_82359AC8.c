extern int fn_822ABA88();


__int64 fn_82359AC8(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  unsigned __int64 uVar7;
  __int64 lVar8;
  
  lVar8 = 0;
  uVar1 = **(unsigned int **)**(unsigned int **)(param_1 + 8);
  uVar7 = (unsigned __int64)uVar1;
  for (lVar6 = (__int64)((int)((*(unsigned int **)**(unsigned int **)(param_1 + 8))[1] - uVar1) >> 2);
      lVar6 != 0; lVar6 = lVar6 + -1) {
    uVar5 = (unsigned __int64)*(unsigned int *)uVar7;
    uVar3 = 0;
    uVar4 = (unsigned __int64)*(unsigned int *)(*(unsigned int *)uVar7 + 8);
    if (uVar4 != 0) {
      do {
        iVar2 = fn_822ABA88(uVar5);
        if (*(int *)(iVar2 + 0x74) != 0) {
          lVar8 = lVar8 + 1;
        }
        uVar3 = uVar3 + 1;
      } while ((uVar3 & 0xffffffff) < (uVar4 & 0xffffffff));
    }
    uVar7 = uVar7 + 4;
  }
  return lVar8;
}

