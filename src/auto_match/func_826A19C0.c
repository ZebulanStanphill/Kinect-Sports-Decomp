extern int fn_826C3768();


unsigned int * fn_826A19C0(unsigned int *param_1,unsigned int *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  fn_826C3768(param_1 + 2,param_2 + 2);
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  return param_1;
}

