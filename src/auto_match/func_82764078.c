extern unsigned int lbl_82005748;
extern unsigned int lbl_820147E0;
extern unsigned int lbl_82014840;
extern unsigned int lbl_821AAD20;


void fn_82764078(unsigned int *param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  *param_1 = &lbl_820147E0;
  uVar2 = lbl_821AAD20;
  param_1[1] = lbl_821AAD20;
  param_1[2] = uVar2;
  param_1[3] = uVar2;
  param_1[4] = uVar2;
  sync(1);
  param_1[5] = 1;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[1] = uVar2;
  param_1[2] = uVar2;
  param_1[3] = uVar2;
  param_1[4] = uVar2;
  *(unsigned char *)(param_1 + 9) = 0;
  *(unsigned char *)((int)param_1 + 0x25) = 0;
  uVar1 = lbl_82005748;
  param_1[10] = 0;
  *param_1 = &lbl_82014840;
  param_1[0x10] = uVar2;
  param_1[0x11] = uVar2;
  param_1[0x12] = uVar2;
  param_1[0x13] = uVar2;
  param_1[0xf] = uVar1;
  *(unsigned char *)(param_1 + 9) = *(unsigned char *)(param_1 + 9) | 0xc0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = uVar2;
  param_1[0x11] = uVar2;
  param_1[0x12] = uVar2;
  param_1[0x13] = uVar2;
  return;
}

