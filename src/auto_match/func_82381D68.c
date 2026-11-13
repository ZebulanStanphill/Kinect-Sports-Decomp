extern int fn_8289D6D0();
extern int fn_8289D7E8();
extern unsigned int lbl_82196B30;
extern unsigned int lbl_82197100;
extern unsigned int lbl_821B3A70;


unsigned int * fn_82381D68(unsigned int *param_1,unsigned int param_2,unsigned char param_3)

{
  param_1[2] = param_1 + 1;
  param_1[1] = param_1 + 1;
  param_1[3] = 0;
  param_1[4] = param_2;
  param_1[10] = 0;
  *param_1 = &lbl_821B3A70;
  fn_8289D6D0(param_1 + 0xc,4);
  param_1[0xc] = &lbl_82197100;
  fn_8289D7E8(param_1 + 0x21,5);
  param_1[0x21] = &lbl_82196B30;
  fn_8289D6D0(param_1 + 0x36,4);
  param_1[0x36] = &lbl_82197100;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  *(unsigned char *)(param_1 + 0x4f) = 0;
  param_1[0x50] = 0;
  *(unsigned char *)(param_1 + 0x51) = param_3;
  return param_1;
}

