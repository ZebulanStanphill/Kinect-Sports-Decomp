extern int fn_82BE51E8();
extern unsigned int lbl_820E9334;


unsigned int * fn_82BE5908(unsigned int *param_1,unsigned int param_2,unsigned __int64 param_3)

{
  fn_82BE51E8(param_1,param_3);
  param_1[5] = param_2;
  param_1[7] = 0;
  param_1[6] = 1;
  *param_1 = &lbl_820E9334;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(unsigned __int64 *)(param_1 + 0xe) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 1;
  param_1[0x12] = 0x32;
  return param_1;
}

