extern int fn_826A5208();


unsigned int * fn_826A5E90(unsigned int *param_1,unsigned int *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  fn_826A5208(param_1 + 4,param_2[4],param_2[5]);
  return param_1;
}

