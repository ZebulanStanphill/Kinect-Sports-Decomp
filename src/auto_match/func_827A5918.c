extern int fn_8268C2D0();


unsigned int * fn_827A5918(unsigned int *param_1,unsigned int *param_2)

{
  *param_1 = *param_2;
  fn_8268C2D0(param_1 + 1,param_2 + 1);
  param_1[2] = param_2[2];
  return param_1;
}

