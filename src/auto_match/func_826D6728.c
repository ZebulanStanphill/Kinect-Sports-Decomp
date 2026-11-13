extern int fn_8268B330();


unsigned int * fn_826D6728(unsigned int *param_1)

{
  fn_8268B330(param_1 + 5);
  fn_8268B330(param_1 + 6);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  *(unsigned short *)(param_1 + 3) = 0;
  return param_1;
}

