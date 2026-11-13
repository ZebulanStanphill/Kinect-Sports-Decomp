extern int fn_8303A7D8();
extern int fn_8304E930();
extern unsigned int lbl_8217DC18;


unsigned int * fn_8304D760(unsigned int *param_1,unsigned __int64 param_2)

{
  fn_8303A7D8();
  *param_1 = &lbl_8217DC18;
  fn_8304E930(param_1 + 4,param_2);
  param_1[8] = 0;
  param_1[9] = 0;
  *(unsigned short *)(param_1 + 7) = *(unsigned short *)(param_1[2] + 0xd4);
  return param_1;
}

