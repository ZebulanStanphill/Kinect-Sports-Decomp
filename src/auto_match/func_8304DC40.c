extern int fn_8304D760();
extern unsigned int lbl_8217DC50;


unsigned int * fn_8304DC40(unsigned int *param_1)

{
  fn_8304D760();
  param_1[10] = 0;
  *param_1 = &lbl_8217DC50;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(unsigned char *)(param_1 + 0x10) = 0;
  *(unsigned char *)((int)param_1 + 0x41) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(unsigned char *)(param_1 + 0x16) = 0;
  return param_1;
}

