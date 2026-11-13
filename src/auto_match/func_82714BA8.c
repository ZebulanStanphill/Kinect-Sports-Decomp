extern int fn_826829A0();
extern int fn_826C09B0();
extern unsigned int lbl_8200F4C8;
extern unsigned int lbl_8200F51C;


unsigned int * fn_82714BA8(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  fn_826C09B0();
  *param_1 = &lbl_8200F51C;
  param_1[4] = &lbl_8200F4C8;
  param_1[0xc] = 0;
  fn_826829A0(param_1 + 4,param_2,param_3);
  return param_1;
}

