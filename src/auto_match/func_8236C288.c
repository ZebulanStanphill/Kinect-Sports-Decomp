extern int fn_822ABA88();


int fn_8236C288(int param_1,int param_2)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  
  puVar1 = *(unsigned int **)(param_1 + 8);
  if (puVar1 != (unsigned int *)0x0) {
    lVar6 = 0;
    iVar3 = (int)(puVar1[1] - *puVar1) >> 2;
    if (0 < iVar3) {
      uVar7 = (unsigned __int64)*puVar1;
      do {
        uVar5 = 0;
        uVar2 = *(unsigned int *)(((int *)*(int *)uVar7)[4] * 4 + *(int *)*(int *)uVar7);
        uVar9 = (unsigned __int64)uVar2;
        uVar8 = (unsigned __int64)*(unsigned int *)(uVar2 + 8);
        if (uVar8 != 0) {
          do {
            iVar4 = fn_822ABA88(uVar9);
            if (*(int *)(*(int *)(iVar4 + 0x110) + 0x18) == param_2) {
              return iVar4;
            }
            uVar5 = uVar5 + 1;
          } while ((uVar5 & 0xffffffff) < (uVar8 & 0xffffffff));
        }
        lVar6 = lVar6 + 1;
        uVar7 = uVar7 + 4;
      } while ((int)lVar6 < iVar3);
    }
  }
  return 0;
}

