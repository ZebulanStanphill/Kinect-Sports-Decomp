extern int fn_82A776A0();
extern int fn_82A81918();
extern unsigned int lbl_820A6CC4;


unsigned int * fn_82A781D8(unsigned int *param_1,unsigned int param_2,unsigned __int64 param_3)

{
  fn_82A81918(param_1,param_3);
  param_1[0x20] = param_2;
  param_1[0x1e] = 0;
  *param_1 = &lbl_820A6CC4;
  param_1[0x1f] = 0;
  fn_82A776A0(param_1 + 0x21);
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x3c] = param_1 + 0x34;
  param_1[0x30] = 0;
  *(unsigned __int64 *)(param_1 + 0x32) = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 1;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 1;
  param_1[0x42] = 0;
  *(unsigned __int64 *)(param_1 + 0x34) = 0;
  *(unsigned __int64 *)(param_1 + 0x36) = 0;
  *(unsigned __int64 *)(param_1 + 0x38) = 0;
  *(unsigned __int64 *)(param_1 + 0x3a) = 0;
  return param_1;
}

