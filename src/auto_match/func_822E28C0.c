extern int fn_8229F618();
extern int fn_822ABA88();
extern int fn_822CFA38();
extern int fn_822E2BE8();
extern unsigned int lbl_821916FC;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_83265A28;


void fn_822E28C0(int param_1)

{
  unsigned int uVar1;
  int *piVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  int iVar5;
  unsigned __int64 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  uVar1 = *(unsigned int *)(param_1 + 0x14);
  uVar6 = (unsigned __int64)uVar1;
  if (*(int *)(uVar1 + 0x2ec) != 0) {
    piVar2 = *(int **)(**(int **)(*(int *)(param_1 + 0x10) + 8) + *(int *)(uVar1 + 0x2c) * -4 + 4);
    uVar4 = fn_822ABA88(*(unsigned int *)(piVar2[4] * 4 + *piVar2),*(unsigned int *)(param_1 + 0x44));
    iVar5 = fn_822CFA38(uVar6,1);
    dVar9 = (double)ltcg_pool_0_0f;
    dVar7 = (double)lbl_821CA460;
    dVar8 = dVar9;
    if (iVar5 != 0) {
      dVar8 = dVar7;
    }
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    fn_822E2BE8((double)(float)((double)(float)((double)(float)(lbl_83265A28 & 0x7fffff |
                                                                     0x3f800000) - dVar7) *
                                      (double)lbl_821916FC - dVar7),dVar8,param_1,uVar4,
                      *(unsigned int *)(param_1 + 0x30));
    uVar3 = *(unsigned int *)(param_1 + 0x34);
    *(float *)(param_1 + 0x3c) = (float)dVar9;
    *(unsigned int *)(param_1 + 0x34) = 0;
    *(unsigned int *)(param_1 + 0x38) = uVar3;
    if (*(int *)(param_1 + 0x60) != 0) {
      (**(int (***)())(**(int **)(param_1 + 0x10) + 200))();
      *(unsigned int *)(param_1 + 0x60) = 0;
    }
    iVar5 = *(int *)(param_1 + 0x10);
    if ((*(int *)(iVar5 + 0x204) == 0) &&
       (*(unsigned int *)(iVar5 + 0x344) = 0,
       *(int *)(*(int *)(*(int *)(iVar5 + 0xd4) + 0xc) + 0x58) != 0)) {
      fn_8229F618();
    }
  }
  return;
}

