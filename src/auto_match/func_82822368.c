void fn_82822368(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)param_1[1];
  iVar2 = *param_1;
  *(int **)(iVar2 + 4) = piVar1;
  if (piVar1 != (int *)0x0) {
    *piVar1 = iVar2;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

