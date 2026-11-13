extern int fn_82EF1388();
extern unsigned int lbl_82160378;
extern unsigned int lbl_82160380;
extern unsigned int lbl_821603B8;
extern unsigned int lbl_821603D4;
extern unsigned int lbl_821603DC;
extern unsigned int lbl_821603F8;


unsigned int * fn_82EF18A0(unsigned int *param_1)

{
  *param_1 = &lbl_82160380;
  param_1[1] = &lbl_821603B8;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x26] = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x49] = &lbl_82160378;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  *param_1 = &lbl_821603F8;
  param_1[1] = &lbl_821603DC;
  param_1[0x49] = &lbl_821603D4;
  fn_82EF1388(param_1 + 1);
  return param_1;
}

