extern int fn_82381C38();
extern int fn_82381D68();
extern int fn_8289D7E8();
extern unsigned int lbl_821B95C8;
extern unsigned int lbl_821B9610;
extern unsigned int lbl_821B96AC;


unsigned int * fn_8243CAD0(unsigned int *param_1,unsigned __int64 param_2)

{
  fn_82381C38();
  *param_1 = &lbl_821B96AC;
  fn_82381D68(param_1 + 0x3c,param_2,1);
  fn_82381D68(param_1 + 0x8e,param_2,1);
  fn_82381D68(param_1 + 0xe0,param_2,1);
  fn_82381D68(param_1 + 0x132,param_2,1);
  fn_82381D68(param_1 + 0x184,param_2,1);
  fn_82381D68(param_1 + 0x1d6,param_2,1);
  fn_8289D7E8(param_1 + 0x228,4);
  param_1[0x228] = &lbl_821B95C8;
  fn_8289D7E8(param_1 + 0x23d,4);
  param_1[0x23d] = &lbl_821B9610;
  return param_1;
}

