extern int fn_822ABA88();


int fn_823CBF20(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  int iVar8;
  
  iVar8 = 0;
  lVar4 = 2;
  uVar5 = (unsigned __int64)**(unsigned int **)(*(int *)(param_1 + 0x240) + 8);
  do {
    uVar3 = 0;
    uVar1 = *(unsigned int *)(((int *)*(int *)uVar5)[4] * 4 + *(int *)*(int *)uVar5);
    uVar7 = (unsigned __int64)uVar1;
    uVar6 = (unsigned __int64)*(unsigned int *)(uVar1 + 8);
    if (uVar6 != 0) {
      do {
        iVar2 = fn_822ABA88(uVar7);
        if ((*(int *)(iVar2 + 0x120) != 0) || (*(int *)(iVar2 + 0x240) != 0)) {
          iVar8 = iVar2;
        }
        uVar3 = uVar3 + 1;
      } while ((uVar3 & 0xffffffff) < (uVar6 & 0xffffffff));
    }
    lVar4 = lVar4 + -1;
    uVar5 = uVar5 + 4;
  } while (lVar4 != 0);
  return iVar8;
}

