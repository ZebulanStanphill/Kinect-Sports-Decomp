extern int fn_828974A8();
extern int fn_8289D4C0();
extern unsigned int lbl_82196CE0;
extern unsigned int lbl_82197070;
extern unsigned int lbl_82197080;
extern unsigned int lbl_82197294;
extern unsigned int lbl_821983E8;


void fn_8223B998(unsigned int *param_1)

{
  *param_1 = &lbl_82197294;
  param_1[0xa5] = &lbl_82197080;
  fn_8289D4C0(param_1 + 0xa5);
  param_1[0x90] = &lbl_82197080;
  fn_8289D4C0(param_1 + 0x90);
  param_1[0x7b] = &lbl_82197080;
  fn_8289D4C0(param_1 + 0x7b);
  param_1[0x66] = &lbl_82197080;
  fn_8289D4C0(param_1 + 0x66);
  param_1[0x51] = &lbl_82197080;
  fn_8289D4C0(param_1 + 0x51);
  param_1[0x3c] = &lbl_82197080;
  fn_8289D4C0(param_1 + 0x3c);
  param_1[0x27] = &lbl_821983E8;
  fn_8289D4C0(param_1 + 0x27);
  param_1[0x12] = &lbl_82196CE0;
  fn_8289D4C0(param_1 + 0x12);
  *param_1 = &lbl_82197070;
  fn_828974A8(param_1);
  return;
}

