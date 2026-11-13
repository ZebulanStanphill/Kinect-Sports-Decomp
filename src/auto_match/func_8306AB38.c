void fn_8306AB38(unsigned int *param_1,int param_2)

{
  int iVar1;
  
  if (param_1[1] != 0) {
    *(int *)(param_1[1] + 4) = param_2;
  }
  iVar1 = param_1[1];
  *(unsigned int *)(param_2 + 4) = 0;
  *(int *)(param_2 + 8) = iVar1;
  if (*param_1 == 0) {
    *param_1 = param_2;
  }
  param_1[1] = param_2;
  *(int **)(param_2 + 0xc) = param_1;
  param_1[2] = param_1[2] + 1;
  return;
}

