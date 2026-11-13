extern int fn_8288B668();
extern int fn_8289D6D0();
extern int fn_8289D7E8();
extern unsigned int lbl_82196CE0;
extern unsigned int lbl_82197080;
extern unsigned int lbl_82197294;
extern unsigned int lbl_821983E8;


unsigned int * fn_8223BBA0(unsigned int *param_1)

{
  fn_8288B668();
  *param_1 = &lbl_82197294;
  fn_8289D7E8(param_1 + 0x12,8);
  param_1[0x12] = &lbl_82196CE0;
  fn_8289D7E8(param_1 + 0x27,0x10);
  param_1[0x27] = &lbl_821983E8;
  fn_8289D6D0(param_1 + 0x3c,2);
  param_1[0x3c] = &lbl_82197080;
  fn_8289D6D0(param_1 + 0x51,0);
  param_1[0x51] = &lbl_82197080;
  fn_8289D6D0(param_1 + 0x66,0);
  param_1[0x66] = &lbl_82197080;
  fn_8289D6D0(param_1 + 0x7b,0);
  param_1[0x7b] = &lbl_82197080;
  fn_8289D6D0(param_1 + 0x90,0);
  param_1[0x90] = &lbl_82197080;
  fn_8289D6D0(param_1 + 0xa5,0);
  param_1[0xa5] = &lbl_82197080;
  return param_1;
}

