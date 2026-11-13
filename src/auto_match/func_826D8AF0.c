extern int fn_8268C750();


unsigned int * fn_826D8AF0(unsigned int *param_1,unsigned int *param_2,unsigned int param_3)

{
  *param_1 = param_3;
  fn_8268C750(param_1 + 2,*param_2);
  *(unsigned char *)(param_1 + 3) = *(unsigned char *)param_2[1];
  return param_1;
}

