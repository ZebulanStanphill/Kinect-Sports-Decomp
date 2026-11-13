extern int fn_8268C2D0();


unsigned int * fn_8271A580(unsigned int *param_1,int param_2,unsigned int param_3)

{
  *param_1 = param_3;
  fn_8268C2D0(param_1 + 2);
  param_1[3] = *(unsigned int *)(param_2 + 4);
  param_1[4] = *(unsigned int *)(param_2 + 8);
  return param_1;
}

