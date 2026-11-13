extern int fn_827A5918();


unsigned int * fn_827A69F8(unsigned int *param_1,unsigned int *param_2,unsigned int param_3)

{
  *param_1 = param_3;
  fn_827A5918(param_1 + 1,*param_2);
  param_1[4] = *(unsigned int *)param_2[1];
  return param_1;
}

