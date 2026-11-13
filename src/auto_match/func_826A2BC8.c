extern int fn_826829A0();
extern int fn_8268C210();
extern int fn_826C09B0();
extern unsigned int lbl_82006E68;
extern unsigned int lbl_82006EBC;


unsigned int * fn_826A2BC8(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  fn_826C09B0();
  param_1[0xc] = 0;
  *param_1 = &lbl_82006EBC;
  param_1[4] = &lbl_82006E68;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  fn_8268C210(param_1 + 0x10);
  param_1[0x11] = 0;
  fn_826829A0(param_1 + 4,param_2,param_3);
  return param_1;
}

