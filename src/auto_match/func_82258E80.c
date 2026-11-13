extern int fn_822337D0();
extern int fn_8289D6D0();
extern int fn_8289D7E8();
extern unsigned int lbl_82197080;
extern unsigned int lbl_82197760;
extern unsigned int lbl_82198348;
extern unsigned int lbl_821983E8;
extern unsigned int lbl_82198450;
extern unsigned int lbl_821B9610;


unsigned int * fn_82258E80(unsigned int *param_1)

{
  fn_822337D0();
  *param_1 = &lbl_82198450;
  fn_8289D7E8(param_1 + 0x7b,0x10);
  param_1[0x7b] = &lbl_821983E8;
  fn_8289D6D0(param_1 + 0x90,0);
  param_1[0x90] = &lbl_82197080;
  fn_8289D7E8(param_1 + 0xa5,4);
  param_1[0xa5] = &lbl_821B9610;
  fn_8289D7E8(param_1 + 0xba,4);
  param_1[0xba] = &lbl_821B9610;
  fn_8289D7E8(param_1 + 0xcf,4);
  param_1[0xcf] = &lbl_821B9610;
  fn_8289D7E8(param_1 + 0xe4,4);
  param_1[0xe4] = &lbl_821B9610;
  fn_8289D6D0(param_1 + 0xf9,0);
  param_1[0xf9] = &lbl_82197080;
  fn_8289D6D0(param_1 + 0x10e,0);
  param_1[0x10e] = &lbl_82197080;
  fn_8289D7E8(param_1 + 0x123,5);
  param_1[0x123] = &lbl_82198348;
  fn_8289D7E8(param_1 + 0x138,4);
  param_1[0x138] = &lbl_82197760;
  fn_8289D7E8(param_1 + 0x14d,0x10);
  param_1[0x14d] = &lbl_821983E8;
  fn_8289D6D0(param_1 + 0x162,0);
  param_1[0x162] = &lbl_82197080;
  fn_8289D6D0(param_1 + 0x177,0);
  param_1[0x177] = &lbl_82197080;
  return param_1;
}

