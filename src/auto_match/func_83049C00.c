extern int fn_8304D760();
extern unsigned int lbl_8217DAD4;


unsigned int * fn_83049C00(unsigned int *param_1)

{
  fn_8304D760();
  param_1[10] = 0;
  *param_1 = &lbl_8217DAD4;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(unsigned char *)(param_1 + 0x1f) = 0;
  *(unsigned char *)((int)param_1 + 0x7e) = 0;
  *(unsigned char *)((int)param_1 + 0x7d) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  return param_1;
}

