extern int fn_8268CC00();


unsigned char * fn_827597E0(unsigned char *param_1)

{
  *(unsigned int *)(param_1 + 8) = 0;
  *(unsigned int *)(param_1 + 0xc) = 0;
  fn_8268CC00(param_1 + 0x10);
  *param_1 = 0;
  param_1[1] = 2;
  *(unsigned int *)(param_1 + 4) = 0;
  return param_1;
}

