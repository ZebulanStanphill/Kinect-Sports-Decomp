extern int fn_822ABA88();
extern int fn_82337B90();
extern int fn_82359108();
extern int fn_82359200();
extern int fn_8242C410();
extern int fn_8288B760();
extern unsigned int iStack_54;
extern unsigned int lbl_82191FC8;
extern unsigned int ltcg_pool_0_0f;


void fn_8242BF30(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  unsigned int uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iStack_54;
  int aiStack_50 [20];
  
  iVar9 = 0;
  if (*(int *)(*(int *)(*(int *)(param_1 + 0x174) + 0x5c) + 0x1d4) == -1) {
    iVar7 = 0;
  }
  else {
    iVar7 = *(int *)(*(int *)(param_1 + 0x174) + 0x5c);
    iVar7 = *(int *)(*(int *)(iVar7 + 0x1d4) * 4 + *(int *)(iVar7 + 0x1c4));
  }
  aiStack_50[0] = 0;
  aiStack_50[1] = 0;
  iVar10 = *(int *)(*(int *)(iVar7 + 0x40) + 0x204);
  iVar3 = fn_8242C410(param_1);
  if (iVar10 < iVar3) {
    iVar3 = iVar10 << 2;
    piVar8 = &iStack_54;
    do {
      piVar2 = *(int **)(**(int **)(param_1 + 8) + iVar3);
      iVar4 = fn_822ABA88(*(unsigned int *)(piVar2[4] * 4 + *piVar2),0);
      if (*(int *)(iVar4 + 0x24) != 0) {
        if (*(int *)(iVar4 + 0x168) == 0) {
          uVar5 = *(unsigned int *)(iVar4 + 0x16c);
        }
        else {
          uVar5 = fn_8288B760();
          uVar5 = uVar5 & 0xff;
        }
        if (uVar5 != 0) {
          if ((*(int *)(*(int *)(iVar7 + 0x40) + 0xf8) != 0) ||
             (iVar6 = fn_82337B90(iVar4), iVar6 != 0)) {
            piVar8 = piVar8 + 1;
            *piVar8 = iVar4;
            iVar9 = iVar9 + 1;
          }
          if (iVar9 == 2) break;
        }
      }
      iVar10 = iVar10 + 1;
      iVar3 = iVar3 + 4;
      iVar4 = fn_8242C410(param_1);
    } while (iVar10 < iVar4);
  }
  iVar9 = *(int *)(*(int *)(iVar7 + 0x40) + 0x114);
  if ((iVar9 == 4) || (fVar1 = ltcg_pool_0_0f, iVar9 == 5)) {
    fVar1 = lbl_82191FC8;
  }
  if ((*(int *)(param_1 + 0xa0) == 0) || (*(int *)(*(int *)(param_1 + 0xa0) + 0x40) != 1)) {
    fn_82359108((double)fVar1,param_1,aiStack_50[0],aiStack_50[1],param_4,param_2);
  }
  else {
    fn_82359200(param_1);
  }
  return;
}

