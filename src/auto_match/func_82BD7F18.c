int fn_82BD7F18(unsigned int *param_1,unsigned int *param_2)

{
  int iVar1;
  int *piVar2;
  
  if (*(int *)*param_2 == 0x103) {
    *(int *)*param_2 = 0;
  }
  *param_2 = 0;
  piVar2 = param_1 + 2;
  if ((param_2 == (unsigned int *)param_1[2]) && (iVar1 = *piVar2, iVar1 != 0)) {
    if (iVar1 == param_1[3]) {
      param_1[3] = 0;
    }
    *piVar2 = *(int *)(iVar1 + 4);
    *(unsigned int *)(iVar1 + 4) = 0;
  }
  param_2[1] = 0;
  if (param_1[1] == 0) {
    *param_1 = param_2;
  }
  else {
    *(unsigned int **)(param_1[1] + 4) = param_2;
  }
  param_1[1] = param_2;
  return *piVar2;
}

