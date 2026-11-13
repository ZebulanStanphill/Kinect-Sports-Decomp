extern int fn_8268C2D0();


unsigned int * fn_826CC1F0(unsigned int *param_1,unsigned int *param_2,unsigned int param_3)

{
  *param_1 = param_3;
  fn_8268C2D0(param_1 + 2,*param_2);
  param_1[3] = *(unsigned int *)param_2[1];
  return param_1;
}

