void fn_8284F560(int param_1,int param_2,unsigned int param_3,unsigned int param_4,unsigned int param_5,
                  unsigned int param_6,unsigned int param_7,unsigned int param_8)

{
  param_2 = param_2 * 0xf0;
  *(unsigned int *)(*(int *)(param_1 + 8) + param_2 + 0xbc) = param_3;
  *(unsigned int *)(*(int *)(param_1 + 8) + param_2 + 0xc0) = param_4;
  *(unsigned int *)(*(int *)(param_1 + 8) + param_2 + 0xc4) = param_5;
  *(unsigned int *)(*(int *)(param_1 + 8) + param_2 + 0xd0) = param_8;
  *(unsigned int *)(*(int *)(param_1 + 8) + param_2 + 200) = param_6;
  *(unsigned int *)(*(int *)(param_1 + 8) + param_2 + 0xcc) = param_7;
  return;
}

