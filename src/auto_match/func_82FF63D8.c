extern unsigned int lbl_8217D040;


unsigned int * fn_82FF63D8(unsigned int *param_1)

{
  *param_1 = &lbl_8217D040;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0xffffffff;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x13] = 0xffffffff;
  RtlInitializeCriticalSection(param_1 + 0x14);
  return param_1;
}

