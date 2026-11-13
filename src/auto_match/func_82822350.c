void fn_82822350(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  *(int **)(iVar1 + 4) = param_2;
  *param_2 = iVar1;
  param_2[1] = (int)param_1;
  *param_1 = (int)param_2;
  return;
}

