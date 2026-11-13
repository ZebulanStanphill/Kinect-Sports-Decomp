extern int fn_8269DDA0();


unsigned int * fn_8269FBC0(unsigned int *param_1,unsigned int *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  fn_8269DDA0(param_1 + 4,param_2 + 4);
  return param_1;
}

