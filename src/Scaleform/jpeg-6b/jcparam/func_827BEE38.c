unsigned int *
fill_a_scan(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
             unsigned int param_5,unsigned int param_6)

{
  param_1[1] = param_2;
  param_1[5] = param_3;
  *param_1 = 1;
  param_1[6] = param_4;
  param_1[7] = param_5;
  param_1[8] = param_6;
  return param_1 + 9;
}

