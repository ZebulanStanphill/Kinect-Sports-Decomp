extern int fn_8256BDE0();
extern int fn_825E7D78();
extern int fn_8265CA20();


int * fn_825E7BF0(int *param_1,int param_2,unsigned int *param_3,int *param_4)

{
  unsigned int *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  unsigned char uVar6;
  unsigned int *puVar7;
  
  iVar4 = fn_8256BDE0(param_2,param_3);
  iVar4 = iVar4 * 8;
  puVar7 = *(unsigned int **)(param_2 + 4);
  piVar5 = (int *)(iVar4 + *(int *)(param_2 + 0x10));
  puVar1 = (unsigned int *)*piVar5;
  if ((puVar7 != puVar1) && (puVar7 = *(unsigned int **)piVar5[1], puVar7 != puVar1)) {
    do {
      puVar7 = (unsigned int *)puVar7[1];
      if ((unsigned int)puVar7[2] <= *param_3) {
        if (*param_3 <= (unsigned int)puVar7[2]) {
          if (param_4 != *(int **)(param_2 + 4)) {
            *(int *)param_4[1] = *param_4;
            *(int *)(*param_4 + 4) = param_4[1];
            fn_8265CA20(param_4);
            *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + -1;
          }
          uVar6 = 0;
          *param_1 = (int)puVar7;
          goto LAB_825e7d68;
        }
        puVar7 = (unsigned int *)*puVar7;
        break;
      }
    } while (puVar7 != puVar1);
  }
  puVar1 = (unsigned int *)*param_4;
  if (puVar7 != puVar1) {
    *(unsigned int **)param_4[1] = puVar1;
    *(unsigned int **)puVar1[1] = puVar7;
    *(int **)puVar7[1] = param_4;
    iVar2 = puVar7[1];
    puVar7[1] = puVar1[1];
    puVar1[1] = param_4[1];
    param_4[1] = iVar2;
  }
  piVar5 = (int *)(iVar4 + *(int *)(param_2 + 0x10));
  if ((unsigned int *)*piVar5 == *(unsigned int **)(param_2 + 4)) {
    *piVar5 = (int)param_4;
    *(int **)(iVar4 + *(int *)(param_2 + 0x10) + 4) = param_4;
  }
  else if ((unsigned int *)*piVar5 == puVar7) {
    *piVar5 = (int)param_4;
  }
  else {
    piVar3 = *(int **)piVar5[1];
    piVar5[1] = (int)piVar3;
    if (piVar3 != param_4) {
      iVar4 = iVar4 + *(int *)(param_2 + 0x10);
      *(unsigned int *)(iVar4 + 4) = *(unsigned int *)(*(int *)(iVar4 + 4) + 4);
    }
  }
  fn_825E7D78(param_2);
  uVar6 = 1;
  *param_1 = (int)param_4;
LAB_825e7d68:
  *(unsigned char *)(param_1 + 1) = uVar6;
  return param_1;
}

