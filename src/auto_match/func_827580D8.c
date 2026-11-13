extern int fn_8268CC00();
extern unsigned int lbl_82014530;
extern unsigned int lbl_821AAD20;


unsigned int * fn_827580D8(unsigned int *param_1)

{
  unsigned int uVar1;
  
  param_1[1] = 1;
  param_1[2] = 0;
  param_1[3] = 0x40000;
  uVar1 = lbl_821AAD20;
  *param_1 = &lbl_82014530;
  param_1[4] = uVar1;
  param_1[5] = uVar1;
  param_1[6] = uVar1;
  param_1[7] = uVar1;
  fn_8268CC00(param_1 + 8);
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(unsigned char *)(param_1 + 0x11) = 0;
  return param_1;
}

