extern int fn_8268C750();


unsigned int * fn_826D8A90(unsigned int *param_1,unsigned int *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  fn_8268C750(param_1 + 2,param_2 + 2);
  *(unsigned char *)(param_1 + 3) = *(unsigned char *)(param_2 + 3);
  return param_1;
}

