void fn_82239108(unsigned int *param_1,int *param_2,unsigned int *param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  
  piVar4 = (int *)param_2[2];
  piVar7 = param_2;
  piVar6 = piVar4;
  if (((int *)param_2[1] != (int *)0x0) && (piVar6 = (int *)param_2[1], piVar4 != (int *)0x0)) {
    piVar6 = (int *)piVar4[1];
    piVar7 = piVar4;
    while (piVar4 = piVar6, piVar4 != (int *)0x0) {
      piVar7 = piVar4;
      piVar6 = (int *)piVar4[1];
    }
    piVar6 = (int *)piVar7[2];
    if (piVar7 != param_2) {
      *(int **)param_2[1] = piVar7;
      piVar7[1] = param_2[1];
      piVar4 = piVar7;
      if (piVar7 != (int *)param_2[2]) {
        piVar4 = (int *)*piVar7;
        if (piVar6 != (int *)0x0) {
          *piVar6 = (int)piVar4;
        }
        piVar4[1] = (int)piVar6;
        piVar7[2] = param_2[2];
        *(int **)param_2[2] = piVar7;
      }
      iVar1 = *param_2;
      if ((int *)*param_1 == param_2) {
        *param_1 = piVar7;
      }
      else if (*(int **)(iVar1 + 4) == param_2) {
        *(int **)(iVar1 + 4) = piVar7;
      }
      else {
        *(int **)(iVar1 + 8) = piVar7;
      }
      *piVar7 = *param_2;
      goto LAB_8223929c;
    }
  }
  piVar4 = (int *)*param_2;
  if (piVar6 != (int *)0x0) {
    *piVar6 = (int)piVar4;
  }
  iVar1 = *param_2;
  if ((int *)*param_1 == param_2) {
    *param_1 = piVar6;
  }
  else if (*(int **)(iVar1 + 4) == param_2) {
    *(int **)(iVar1 + 4) = piVar6;
  }
  else {
    *(int **)(iVar1 + 8) = piVar6;
  }
  if ((int *)param_1[1] == param_2) {
    if (param_2[2] == 0) {
      piVar5 = (int *)*param_2;
    }
    else {
      piVar3 = (int *)piVar6[1];
      piVar5 = piVar6;
      while (piVar2 = piVar3, piVar2 != (int *)0x0) {
        piVar5 = piVar2;
        piVar3 = (int *)piVar2[1];
      }
    }
    param_1[1] = piVar5;
  }
  if ((int *)param_1[2] == param_2) {
    if (param_2[1] == 0) {
      param_2 = (int *)*param_2;
    }
    else {
      piVar5 = (int *)piVar6[2];
      param_2 = piVar6;
      while (piVar3 = piVar5, piVar3 != (int *)0x0) {
        param_2 = piVar3;
        piVar5 = (int *)piVar3[2];
      }
    }
    param_1[2] = param_2;
  }
LAB_8223929c:
  *param_3 = piVar6;
  param_3[1] = piVar4;
  param_3[2] = piVar7;
  return;
}

