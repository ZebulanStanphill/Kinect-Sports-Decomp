void fn_82493C80(int param_1,int *param_2)

{
  int *piVar1;
  
  if (*param_2 != 0x44) {
    return;
  }
  for (piVar1 = *(int **)(param_1 + 4);
      (piVar1 != *(int **)(param_1 + 8) && (param_2[2] != *(int *)(*piVar1 + 0x90)));
      piVar1 = piVar1 + 1) {
  }
  if (piVar1 == *(int **)(param_1 + 8)) {
    return;
  }
  *(unsigned int *)(*piVar1 + 0x94) = 1;
  return;
}

