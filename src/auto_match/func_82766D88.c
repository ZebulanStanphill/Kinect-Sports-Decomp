void fn_82766D88(unsigned int *param_1)

{
  int *piVar1;
  unsigned int uVar2;
  
  piVar1 = (int *)*param_1;
  if (*(int *)(*piVar1 + 4) < (int)param_1[1]) {
    return;
  }
  uVar2 = param_1[1] + 1;
  param_1[1] = uVar2;
  if (*(unsigned int *)(*piVar1 + 4) < uVar2) {
    return;
  }
  do {
    if (*(int *)((param_1[1] + 1) * 8 + *piVar1) != -2) {
      return;
    }
    param_1[1] = param_1[1] + 1;
  } while ((unsigned int)param_1[1] <= *(unsigned int *)(*(int *)*param_1 + 4));
  return;
}

