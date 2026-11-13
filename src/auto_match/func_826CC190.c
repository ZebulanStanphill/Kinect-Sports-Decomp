extern int fn_8268C2D0();


unsigned int * fn_826CC190(unsigned int *param_1,unsigned int *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  fn_8268C2D0(param_1 + 2,param_2 + 2);
  param_1[3] = param_2[3];
  return param_1;
}

