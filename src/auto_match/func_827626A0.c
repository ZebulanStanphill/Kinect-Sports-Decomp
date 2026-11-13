extern unsigned int lbl_820147E0;
extern unsigned int lbl_821AAD20;


void fn_827626A0(unsigned int *param_1)

{
  unsigned int uVar1;
  
  *param_1 = &lbl_820147E0;
  uVar1 = lbl_821AAD20;
  param_1[1] = lbl_821AAD20;
  param_1[2] = uVar1;
  param_1[3] = uVar1;
  param_1[4] = uVar1;
  sync(1);
  param_1[5] = 1;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[1] = uVar1;
  param_1[2] = uVar1;
  param_1[3] = uVar1;
  param_1[4] = uVar1;
  *(unsigned char *)(param_1 + 9) = 0;
  *(unsigned char *)((int)param_1 + 0x25) = 0;
  return;
}

