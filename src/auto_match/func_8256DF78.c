extern int fn_8256DBA0();
extern int fn_8256E120();
extern int fn_8265CA20();


int * fn_8256DF78(int *param_1,int param_2,unsigned int *param_3,int *param_4)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  unsigned int uVar6;
  int *piVar7;
  unsigned char uVar8;
  unsigned int *puVar9;
  
  uVar1 = *(unsigned int *)(param_2 + 0x20);
  uVar6 = fn_8256DBA0(param_2,param_3);
  uVar6 = uVar6 & uVar1;
  if (*(unsigned int *)(param_2 + 0x24) <= uVar6) {
    uVar6 = (uVar6 - (uVar1 >> 1)) - 1;
  }
  iVar5 = uVar6 * 8;
  puVar9 = *(unsigned int **)(param_2 + 4);
  piVar7 = (int *)(*(int *)(param_2 + 0x10) + iVar5);
  puVar2 = (unsigned int *)*piVar7;
  if ((puVar9 != puVar2) && (puVar9 = *(unsigned int **)piVar7[1], puVar9 != puVar2)) {
    do {
      puVar9 = (unsigned int *)puVar9[1];
      if ((unsigned int)puVar9[2] <= *param_3) {
        if (*param_3 <= (unsigned int)puVar9[2]) {
          if (param_4 != *(int **)(param_2 + 4)) {
            *(int *)param_4[1] = *param_4;
            *(int *)(*param_4 + 4) = param_4[1];
            fn_8265CA20(param_4);
            *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + -1;
          }
          uVar8 = 0;
          *param_1 = (int)puVar9;
          goto LAB_8256e110;
        }
        puVar9 = (unsigned int *)*puVar9;
        break;
      }
    } while (puVar9 != puVar2);
  }
  puVar2 = (unsigned int *)*param_4;
  if (puVar9 != puVar2) {
    *(unsigned int **)param_4[1] = puVar2;
    *(unsigned int **)puVar2[1] = puVar9;
    *(int **)puVar9[1] = param_4;
    iVar3 = puVar9[1];
    puVar9[1] = puVar2[1];
    puVar2[1] = param_4[1];
    param_4[1] = iVar3;
  }
  piVar7 = (int *)(*(int *)(param_2 + 0x10) + iVar5);
  if ((unsigned int *)*piVar7 == *(unsigned int **)(param_2 + 4)) {
    *piVar7 = (int)param_4;
    *(int **)(*(int *)(param_2 + 0x10) + iVar5 + 4) = param_4;
  }
  else if ((unsigned int *)*piVar7 == puVar9) {
    *piVar7 = (int)param_4;
  }
  else {
    piVar4 = *(int **)piVar7[1];
    piVar7[1] = (int)piVar4;
    if (piVar4 != param_4) {
      iVar5 = *(int *)(param_2 + 0x10) + iVar5;
      *(unsigned int *)(iVar5 + 4) = *(unsigned int *)(*(int *)(iVar5 + 4) + 4);
    }
  }
  fn_8256E120(param_2);
  uVar8 = 1;
  *param_1 = (int)param_4;
LAB_8256e110:
  *(unsigned char *)(param_1 + 1) = uVar8;
  return param_1;
}

