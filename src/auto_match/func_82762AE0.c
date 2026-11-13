extern unsigned int lbl_820147E0;
extern unsigned int lbl_820148A8;
extern unsigned int lbl_821AAD20;


void fn_82762AE0(unsigned int *param_1,unsigned short param_2)

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
  *param_1 = &lbl_820148A8;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(unsigned short *)(param_1 + 0xc) = 0;
  *(unsigned short *)((int)param_1 + 0x32) = param_2;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(unsigned short *)(param_1 + 0x10) = 0;
  return;
}

