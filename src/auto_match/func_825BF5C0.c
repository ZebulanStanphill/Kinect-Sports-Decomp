extern int fn_8256DBA0();
extern int fn_82587028();
extern int fn_825BF7D8();
extern int fn_8265CA20();


int * fn_825BF5C0(int *param_1,int param_2,unsigned int *param_3,int *param_4)

{
  unsigned int *puVar1;
  int iVar2;
  int *piVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  int *piVar6;
  int iVar7;
  unsigned char uVar8;
  int *piVar9;
  unsigned int *puVar10;
  
  uVar5 = *(unsigned int *)(param_2 + 0x20);
  uVar4 = fn_8256DBA0(param_2,param_3);
  uVar4 = uVar4 & uVar5;
  if (*(unsigned int *)(param_2 + 0x24) <= uVar4) {
    uVar4 = (uVar4 - (uVar5 >> 1)) - 1;
  }
  iVar7 = uVar4 * 8;
  puVar10 = *(unsigned int **)(param_2 + 4);
  piVar9 = (int *)(param_2 + 4);
  piVar6 = (int *)(*(int *)(param_2 + 0x10) + iVar7);
  puVar1 = (unsigned int *)*piVar6;
  if ((puVar10 != puVar1) && (puVar10 = *(unsigned int **)piVar6[1], puVar10 != puVar1)) {
    do {
      puVar10 = (unsigned int *)puVar10[1];
      if ((unsigned int)puVar10[2] <= *param_3) {
        if (*param_3 <= (unsigned int)puVar10[2]) {
          if (param_4 != (int *)*piVar9) {
            *(int *)param_4[1] = *param_4;
            *(int *)(*param_4 + 4) = param_4[1];
            fn_8265CA20(param_4);
            *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + -1;
          }
          uVar8 = 0;
          *param_1 = (int)puVar10;
          goto LAB_825bf7c4;
        }
        puVar10 = (unsigned int *)*puVar10;
        break;
      }
    } while (puVar10 != puVar1);
  }
  puVar1 = (unsigned int *)*param_4;
  if (puVar10 != puVar1) {
    *(unsigned int **)param_4[1] = puVar1;
    *(unsigned int **)puVar1[1] = puVar10;
    *(int **)puVar10[1] = param_4;
    iVar2 = puVar10[1];
    puVar10[1] = puVar1[1];
    puVar1[1] = param_4[1];
    param_4[1] = iVar2;
  }
  piVar6 = (int *)(*(int *)(param_2 + 0x10) + iVar7);
  if ((unsigned int *)*piVar6 == (unsigned int *)*piVar9) {
    *piVar6 = (int)param_4;
    *(int **)(*(int *)(param_2 + 0x10) + iVar7 + 4) = param_4;
  }
  else if ((unsigned int *)*piVar6 == puVar10) {
    *piVar6 = (int)param_4;
  }
  else {
    piVar3 = *(int **)piVar6[1];
    piVar6[1] = (int)piVar3;
    if (piVar3 != param_4) {
      iVar7 = *(int *)(param_2 + 0x10) + iVar7;
      *(unsigned int *)(iVar7 + 4) = *(unsigned int *)(*(int *)(iVar7 + 4) + 4);
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
    fn_82587028(param_2);
    fn_825BF7D8(param_2,*piVar9);
  }
  uVar8 = 1;
  *param_1 = (int)param_4;
LAB_825bf7c4:
  *(unsigned char *)(param_1 + 1) = uVar8;
  return param_1;
}

