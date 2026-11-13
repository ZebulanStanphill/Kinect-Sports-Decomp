extern unsigned int lbl_821AAD20;


void fn_82D0B0F8(unsigned int *param_1)

{
  unsigned int uVar1;
  
  *param_1 = 0xffffffff;
  *(unsigned char *)(param_1 + 1) = 1;
  uVar1 = lbl_821AAD20;
  param_1[2] = lbl_821AAD20;
  param_1[3] = uVar1;
  *(unsigned char *)(param_1 + 4) = 0;
  *(unsigned char *)((int)param_1 + 0x11) = 0;
  return;
}

