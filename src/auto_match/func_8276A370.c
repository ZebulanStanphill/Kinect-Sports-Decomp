extern unsigned int lbl_82014D18;
extern unsigned int lbl_82014DEC;
extern unsigned int lbl_821AAD20;


void fn_8276A370(unsigned int *param_1)

{
  unsigned int uVar1;
  
  param_1[5] = 0;
  *param_1 = &lbl_82014D18;
  uVar1 = lbl_821AAD20;
  param_1[1] = 1;
  param_1[2] = uVar1;
  param_1[3] = uVar1;
  param_1[4] = uVar1;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xb] = 1;
  param_1[10] = &lbl_82014DEC;
  param_1[0xc] = param_1 + 7;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  return;
}

