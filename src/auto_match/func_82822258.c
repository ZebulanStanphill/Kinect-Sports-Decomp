void fn_82822258(int param_1,int *param_2,unsigned int *param_3)

{
  *(int **)(param_1 + 4) = param_2;
  *param_2 = param_1;
  param_2[1] = (int)param_3;
  if (param_3 == (unsigned int *)0x0) {
    return;
  }
  *param_3 = param_2;
  return;
}

