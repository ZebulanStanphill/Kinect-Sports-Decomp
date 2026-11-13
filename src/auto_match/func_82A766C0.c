extern int fn_82A81918();
extern unsigned int lbl_820A6C60;


unsigned int * fn_82A766C0(unsigned int *param_1,unsigned int param_2,int param_3,unsigned __int64 param_4)

{
  fn_82A81918(param_1,param_4);
  param_1[0x1f] = param_2;
  param_1[0x21] = param_3;
  param_1[0x1e] = 0;
  *param_1 = &lbl_820A6C60;
  param_1[0x20] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(unsigned int *)(param_3 + 4) = 1;
  param_1[0x1d] = 0;
  return param_1;
}

