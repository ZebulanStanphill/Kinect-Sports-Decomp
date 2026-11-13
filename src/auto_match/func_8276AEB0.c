extern unsigned int lbl_82014DEC;
extern unsigned int lbl_82014DF0;
extern unsigned int lbl_821AAD20;


void fn_8276AEB0(unsigned int *param_1)

{
  unsigned int uVar1;
  
  param_1[5] = 0;
  *param_1 = &lbl_82014DF0;
  uVar1 = lbl_821AAD20;
  param_1[1] = 1;
  param_1[2] = uVar1;
  param_1[3] = uVar1;
  param_1[4] = uVar1;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xc] = 1;
  param_1[0xb] = &lbl_82014DEC;
  param_1[0xd] = param_1 + 7;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x1a] = 0;
  return;
}

