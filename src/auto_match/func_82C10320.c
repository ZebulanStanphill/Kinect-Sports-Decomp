extern int fn_82C06348();
extern unsigned int lbl_820ECFA0;


unsigned int * fn_82C10320(unsigned int *param_1)

{
  fn_82C06348();
  param_1[0xb] = 0;
  *param_1 = &lbl_820ECFA0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(unsigned __int64 *)(param_1 + 0xe) = 0;
  *(unsigned __int64 *)(param_1 + 0x10) = 0;
  param_1[0x17] = 1;
  *(unsigned __int64 *)(param_1 + 0x12) = 0;
  *(unsigned __int64 *)(param_1 + 0x14) = 0;
  param_1[0x16] = 0;
  return param_1;
}

