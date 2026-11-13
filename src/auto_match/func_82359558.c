#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_822ABA88();


int fn_82359558(int param_1,int param_2)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  int iVar9;
  
  if (param_2 != 0) {
    puVar1 = *(unsigned int **)(param_1 + 8);
    uVar8 = ZEXT48(puVar1);
    iVar9 = 0;
    if ((puVar1[1] - *puVar1 & 0xfffffffc) != 0) {
      uVar5 = (unsigned __int64)*puVar1;
      do {
        uVar4 = 0;
        uVar2 = *(unsigned int *)(((int *)*(int *)uVar5)[4] * 4 + *(int *)*(int *)uVar5);
        uVar7 = (unsigned __int64)uVar2;
        uVar6 = (unsigned __int64)*(unsigned int *)(uVar2 + 8);
        if (uVar6 != 0) {
          do {
            iVar3 = fn_822ABA88(uVar7);
            if ((*(int *)(iVar3 + 0x24) != 0) && (*(int *)(iVar3 + 0x24) == param_2)) {
              return iVar3;
            }
            uVar4 = uVar4 + 1;
          } while ((uVar4 & 0xffffffff) < (uVar6 & 0xffffffff));
        }
        iVar9 = iVar9 + 1;
        uVar5 = uVar5 + 4;
      } while (iVar9 < ((int *)uVar8)[1] - *(int *)uVar8 >> 2);
    }
  }
  return 0;
}

