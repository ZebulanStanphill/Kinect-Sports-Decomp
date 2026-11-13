void fn_8284A4E8(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 + 8);
  *(int *)(param_2 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0x2d) == '\0') {
    *(int *)(*piVar1 + 4) = param_2;
  }
  piVar1[1] = *(int *)(param_2 + 4);
  if (param_2 == *(int *)(*(int *)(param_1 + 4) + 4)) {
    *(int **)(*(int *)(param_1 + 4) + 4) = piVar1;
  }
  else if (param_2 == **(int **)(param_2 + 4)) {
    **(int **)(param_2 + 4) = (int)piVar1;
  }
  else {
    *(int **)(*(int *)(param_2 + 4) + 8) = piVar1;
  }
  *piVar1 = param_2;
  *(int **)(param_2 + 4) = piVar1;
  return;
}

