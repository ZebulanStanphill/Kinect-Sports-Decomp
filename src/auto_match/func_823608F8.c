#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_822ABA88();
extern int fn_822B70F0();
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


void fn_823608F8(int param_1,int param_2,__int64 param_3)

{
  int *piVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  uVar4 = 0;
  piVar1 = *(int **)(**(int **)(param_1 + 8) + param_2 * 4);
  uVar3 = ZEXT48(piVar1);
  iVar2 = *(int *)(piVar1[4] * 4 + *piVar1);
  if (*(int *)(iVar2 + 8) != 0) {
    dVar7 = (double)ltcg_pool_0_0f;
    dVar6 = (double)lbl_821CA460;
    do {
      iVar2 = fn_822ABA88(iVar2,uVar4);
      *(unsigned int *)(*(int *)(iVar2 + 0x14) + 0x1d0) = (unsigned int)(param_3 != 0);
      dVar5 = dVar6;
      if ((int)param_3 != 0) {
        dVar5 = dVar7;
      }
      fn_822B70F0(dVar5);
      uVar4 = uVar4 + 1;
      iVar2 = *(int *)(((int *)uVar3)[4] * 4 + *(int *)uVar3);
    } while ((uVar4 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(iVar2 + 8));
  }
  return;
}

