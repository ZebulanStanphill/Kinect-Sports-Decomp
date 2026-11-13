extern int fn_82381C38();
extern int fn_82381D68();
extern int fn_8289D6D0();
extern unsigned int lbl_82197080;
extern unsigned int lbl_82197100;
extern unsigned int lbl_821B7C54;


unsigned int * fn_824042B0(unsigned int *param_1,unsigned __int64 param_2)

{
  fn_82381C38();
  *param_1 = &lbl_821B7C54;
  fn_82381D68(param_1 + 0x3c,param_2,0);
  fn_8289D6D0(param_1 + 0x8e,4);
  param_1[0x8e] = &lbl_82197100;
  fn_8289D6D0(param_1 + 0xa3,4);
  param_1[0xa3] = &lbl_82197100;
  fn_8289D6D0(param_1 + 0xb8,0);
  param_1[0xb8] = &lbl_82197080;
  fn_8289D6D0(param_1 + 0xcd,0);
  param_1[0xcd] = &lbl_82197080;
  return param_1;
}

