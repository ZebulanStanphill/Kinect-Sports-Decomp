void fn_82598830(int param_1,unsigned int *param_2)

{
  *param_2 = *(unsigned int *)(param_1 + 4);
  param_2[1] = *(unsigned int *)(param_1 + 4);
  param_2[2] = *(unsigned int *)(param_1 + 8);
  param_2[3] = 0;
  return;
}

