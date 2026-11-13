void fn_82AA8FD0(int param_1,int param_2,int *param_3,unsigned int *param_4)

{
  *(unsigned int *)(param_1 + 0xc) = 0;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 2 >> 2;
  *(unsigned int *)(param_2 + 0xc) = 0;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) * 3 + 2 >> 2;
  *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 2 >> 2;
  param_3[3] = 0;
  *param_3 = *param_3 + 2 >> 2;
  param_3[1] = param_3[1] + 2 >> 2;
  param_3[2] = param_3[2] + 4 >> 3;
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  param_4[3] = 0;
  return;
}

