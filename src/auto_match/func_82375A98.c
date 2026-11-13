#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_822ABA88();
extern unsigned int ltcg_pool_0_0f;


void fn_82375A98(int param_1)

{
  int iVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  __int64 lVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  int *piVar7;
  double dVar8;
  
  piVar7 = *(int **)(param_1 + 8);
  lVar3 = 0;
  if ((piVar7[1] - *piVar7 & 0xfffffffcU) != 0) {
    lVar4 = 0;
    dVar8 = (double)ltcg_pool_0_0f;
    do {
      uVar2 = 0;
      piVar7 = *(int **)(*piVar7 + (int)lVar4);
      uVar6 = ZEXT48(piVar7);
      uVar5 = (unsigned __int64)*(unsigned int *)(*(int *)(piVar7[4] * 4 + *piVar7) + 8);
      if (uVar5 != 0) {
        do {
          iVar1 = fn_822ABA88(*(unsigned int *)(((int *)uVar6)[4] * 4 + *(int *)uVar6));
          uVar2 = uVar2 + 1;
          *(float *)(iVar1 + 0x25c) = (float)dVar8;
          *(unsigned int *)(iVar1 + 0x254) = 0x18;
          *(unsigned int *)(iVar1 + 0x250) = 0x18;
          *(unsigned int *)(iVar1 + 0x268) = 0;
        } while ((uVar2 & 0xffffffff) < (uVar5 & 0xffffffff));
      }
      piVar7 = *(int **)(param_1 + 8);
      lVar3 = lVar3 + 1;
      lVar4 = lVar4 + 4;
    } while ((int)lVar3 < piVar7[1] - *piVar7 >> 2);
  }
  return;
}

