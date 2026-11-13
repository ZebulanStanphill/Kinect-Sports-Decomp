#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_822ABA88();
extern unsigned int ltcg_pool_0_0f;


unsigned __int64 fn_823759C8(unsigned __int64 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned int uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  double dVar9;
  
  iVar2 = (int)param_1;
  iVar3 = *(int *)(iVar2 + 0x1f8);
  if (iVar3 == param_2) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    uVar6 = 0;
    if (iVar3 < 8) {
      uVar4 = 0;
      piVar1 = *(int **)(**(int **)(iVar2 + 8) + iVar3 * 4);
      uVar8 = ZEXT48(piVar1);
      uVar7 = (unsigned __int64)*(unsigned int *)(*(int *)(piVar1[4] * 4 + *piVar1) + 8);
      if (uVar7 != 0) {
        dVar9 = (double)ltcg_pool_0_0f;
        do {
          iVar3 = fn_822ABA88(*(unsigned int *)(((int *)uVar8)[4] * 4 + *(int *)uVar8));
          iVar2 = (int)param_1;
          uVar4 = uVar4 + 1;
          *(float *)(iVar3 + 0x25c) = (float)dVar9;
          *(unsigned int *)(iVar3 + 0x254) = 0x18;
          uVar6 = (unsigned int)uVar5;
          *(unsigned int *)(iVar3 + 0x268) = uVar6;
          *(unsigned int *)(iVar3 + 0x250) = 0x18;
          *(unsigned int *)(iVar3 + 0x2ac) = uVar6;
        } while ((uVar4 & 0xffffffff) < (uVar7 & 0xffffffff));
      }
    }
    *(int *)(iVar2 + 0x1f8) = param_2;
    uVar5 = 1;
    *(unsigned int *)(iVar2 + 0x1fc) = uVar6;
  }
  return uVar5;
}

