void fn_82B8F170(unsigned __int64 param_1,int *param_2,int param_3)

{
  int *piVar1;
  
  for (piVar1 = (int *)(*param_2 + 8); (int *)*piVar1 != param_2; piVar1 = (int *)(*piVar1 + 0xc)) {
  }
  *piVar1 = param_2[3];
  *param_2 = param_3;
  param_2[3] = *(int *)(param_3 + 8);
  *(int **)(param_3 + 8) = param_2;
  return;
}

