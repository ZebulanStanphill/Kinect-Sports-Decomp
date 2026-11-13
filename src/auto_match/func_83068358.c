void fn_83068358(unsigned int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  unsigned int iVar3;
  
  iVar1 = *param_2;
  if (iVar1 == 0) {
    return;
  }
  iVar2 = param_2[1];
  iVar3 = iVar1;
  do {
    param_1[2] = param_1[2] + 1;
    *(int **)(iVar3 + 0xc) = param_1;
    iVar3 = *(int *)(iVar3 + 4);
  } while (iVar3 != 0);
  if (*param_1 != 0) {
    *(int *)(*param_1 + 8) = iVar2;
  }
  *(int *)(iVar2 + 4) = *param_1;
  if (param_1[1] == 0) {
    param_1[1] = iVar2;
  }
  *param_1 = iVar1;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[4] = 0;
  return;
}

