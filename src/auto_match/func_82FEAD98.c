extern unsigned int lbl_8217BAF0;


unsigned int * fn_82FEAD98(unsigned int *param_1)

{
  *param_1 = &lbl_8217BAF0;
  param_1[1] = 0xffffffff;
  param_1[0x21] = 0;
  RtlInitializeCriticalSection(param_1 + 0x22);
  param_1[0x29] = 0;
  return param_1;
}

