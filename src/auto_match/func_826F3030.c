extern int fn_8267ADA8();


unsigned int * fn_826F3030(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = param_2;
  fn_8267ADA8(param_1 + 3,0);
  param_1[2] = 0;
  param_1[1] = 0;
  *(unsigned char *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  return param_1;
}

