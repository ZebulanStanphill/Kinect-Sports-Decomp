extern int fn_82E50C30();
extern unsigned int lbl_8215FF54;
extern unsigned int lbl_8215FF68;
extern unsigned int lbl_8215FF7C;


unsigned int * fn_82EE8BB8(unsigned int *param_1)

{
  *param_1 = &lbl_8215FF7C;
  param_1[1] = &lbl_8215FF54;
  param_1[2] = &lbl_8215FF68;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[0x12] = 0;
  RtlInitializeCriticalSection(param_1 + 6);
  param_1[0x14] = 0;
  param_1[0x16] = param_1 + 0x15;
  param_1[0x15] = param_1 + 0x15;
  fn_82E50C30(param_1 + 0x17);
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 2;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  return param_1;
}

