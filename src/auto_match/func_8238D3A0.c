extern int fn_822ABA88();
extern unsigned int lbl_82192734;
extern unsigned int ltcg_pool_0_0f;


void fn_8238D3A0(int *param_1,unsigned __int64 param_2)

{
  int iVar1;
  int *piVar2;
  unsigned int uVar3;
  int iVar4;
  int iVar5;
  unsigned __int64 uVar6;
  double dVar7;
  
  iVar1 = param_1[2];
  uVar6 = 0;
  param_1[9] = (int)param_2;
  param_1[10] = 0;
  piVar2 = *(int **)(**(int **)(iVar1 + 8) + 4);
  uVar3 = *(unsigned int *)(*(int *)(piVar2[4] * 4 + *piVar2) + 8);
  if (uVar3 != 0) {
    dVar7 = (double)lbl_82192734;
    do {
      piVar2 = *(int **)(**(int **)(iVar1 + 8) + 4);
      iVar4 = fn_822ABA88(*(unsigned int *)(piVar2[4] * 4 + *piVar2),uVar6);
      iVar5 = (**(int (***)())(*param_1 + 0x98))(param_1);
      if (iVar5 == 0) {
        *(unsigned int *)(iVar4 + 0x2b0) = -((uVar6 < param_2) - 1);
      }
      uVar6 = uVar6 + 1;
      *(float *)(iVar4 + 0x2fc) = (float)dVar7;
    } while ((uVar6 & 0xffffffff) < (unsigned __int64)uVar3);
  }
  param_1[8] = ltcg_pool_0_0f;
  return;
}

