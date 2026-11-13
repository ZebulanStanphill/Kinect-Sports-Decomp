extern int fn_827A5918();


unsigned int * fn_827A6A50(unsigned int *param_1,unsigned int *param_2)

{
  *param_1 = *param_2;
  fn_827A5918(param_1 + 1,param_2 + 1);
  param_1[4] = param_2[4];
  return param_1;
}

