void fn_82599808(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    return;
  }
  piVar4 = *(int **)(iVar1 + 8);
  do {
    piVar3 = piVar4;
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)0x0;
      break;
    }
    piVar4 = (int *)piVar3[1];
  } while ((int *)piVar3[1] != param_1);
  if (piVar3 == (int *)0x0) {
    *(int *)(iVar1 + 8) = param_1[1];
  }
  else {
    piVar3[1] = param_1[1];
  }
  piVar4 = (int *)param_1[2];
  if (piVar4 != (int *)0x0) {
    do {
      piVar2 = piVar4 + 1;
      *piVar4 = iVar1;
      piVar4 = (int *)piVar4[1];
    } while (piVar4 != (int *)0x0);
    if (piVar3 == (int *)0x0) {
      *(int *)(iVar1 + 8) = param_1[2];
    }
    else {
      piVar3[1] = param_1[2];
    }
    *piVar2 = param_1[1];
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

