extern int fn_8248F8E8();
extern int fn_824973B0();
extern int fn_82497430();
extern int fn_82498598();
extern unsigned int lbl_821BEBB0;


int * fn_824983A0(int *param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  unsigned int uVar5;
  int *piVar6;
  int iVar7;
  unsigned char uVar8;
  int *piVar9;
  
  iVar4 = fn_824973B0(param_2,param_3);
  iVar4 = iVar4 * 8;
  iVar7 = *(int *)(param_2 + 4);
  piVar9 = (int *)(param_2 + 4);
  piVar6 = (int *)(iVar4 + *(int *)(param_2 + 0x10));
  iVar1 = *piVar6;
  if ((iVar7 != iVar1) && (iVar7 = *(int *)piVar6[1], iVar7 != iVar1)) {
    do {
      iVar7 = *(int *)(iVar7 + 4);
      if (*param_3 == *(int *)(iVar7 + 8)) {
        if (param_4 != (int *)*piVar9) {
          *(int *)param_4[1] = *param_4;
          *(int *)(*param_4 + 4) = param_4[1];
          param_4[3] = (int)&lbl_821BEBB0;
          fn_8248F8E8(param_4);
          *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + -1;
        }
        uVar8 = 0;
        *param_1 = iVar7;
        goto LAB_82498584;
      }
    } while (iVar7 != iVar1);
  }
  iVar1 = *param_4;
  if (iVar7 != iVar1) {
    *(int *)param_4[1] = iVar1;
    **(int **)(iVar1 + 4) = iVar7;
    **(unsigned int **)(iVar7 + 4) = param_4;
    iVar2 = *(int *)(iVar7 + 4);
    *(unsigned int *)(iVar7 + 4) = *(unsigned int *)(iVar1 + 4);
    *(int *)(iVar1 + 4) = param_4[1];
    param_4[1] = iVar2;
  }
  piVar6 = (int *)(iVar4 + *(int *)(param_2 + 0x10));
  if (*piVar6 == *piVar9) {
    *piVar6 = (int)param_4;
    *(int **)(iVar4 + *(int *)(param_2 + 0x10) + 4) = param_4;
  }
  else if (*piVar6 == iVar7) {
    *piVar6 = (int)param_4;
  }
  else {
    piVar3 = *(int **)piVar6[1];
    piVar6[1] = (int)piVar3;
    if (piVar3 != param_4) {
      iVar4 = iVar4 + *(int *)(param_2 + 0x10);
      *(unsigned int *)(iVar4 + 4) = *(unsigned int *)(*(int *)(iVar4 + 4) + 4);
    }
  }
  uVar5 = *(unsigned int *)(param_2 + 0x24);
  if (*(float *)(param_2 + 0x28) < (float)((double)*(unsigned int *)(param_2 + 8) / (double)uVar5)) {
    iVar7 = 0;
    do {
      if (0x1ffffffe < uVar5) break;
      iVar7 = iVar7 + 1;
      uVar5 = uVar5 << 1;
    } while (iVar7 < 3);
    fn_82497430(param_2);
    fn_82498598(param_2,*piVar9);
  }
  uVar8 = 1;
  *param_1 = (int)param_4;
LAB_82498584:
  *(unsigned char *)(param_1 + 1) = uVar8;
  return param_1;
}

