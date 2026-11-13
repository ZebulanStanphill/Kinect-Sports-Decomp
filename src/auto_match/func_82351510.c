#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_822ABA88();


void fn_82351510(unsigned __int64 param_1,__int64 param_2)

{
  int *piVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  unsigned __int64 uVar6;
  __int64 lVar7;
  
  iVar2 = (int)param_1;
  if ((int)param_2 != *(int *)(iVar2 + 0x324)) {
    lVar7 = (__int64)((*(int **)(iVar2 + 0x1c))[1] - **(int **)(iVar2 + 0x1c) >> 2);
    if (0 < lVar7) {
      lVar5 = 0;
      do {
        uVar3 = 0;
        piVar1 = *(int **)(**(int **)((int)param_1 + 0x1c) + (int)lVar5);
        uVar6 = ZEXT48(piVar1);
        if (*(int *)(*(int *)(piVar1[4] * 4 + *piVar1) + 8) != 0) {
          uVar4 = (unsigned __int64)(param_2 != 0);
          do {
            iVar2 = fn_822ABA88();
            uVar3 = uVar3 + 1;
            *(int *)(*(int *)(iVar2 + 0x14) + 0x1d0) = (int)uVar4;
          } while ((uVar3 & 0xffffffff) <
                   (unsigned __int64)*(unsigned int *)(*(int *)(((int *)uVar6)[4] * 4 + *(int *)uVar6) + 8));
        }
        iVar2 = (int)param_1;
        lVar7 = lVar7 + -1;
        lVar5 = lVar5 + 4;
      } while (lVar7 != 0);
    }
    *(int *)(iVar2 + 0x324) = (int)param_2;
  }
  return;
}

