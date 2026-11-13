extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8202151C;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_821CA1A0;
extern unsigned int lbl_821CA1A4;
extern unsigned int lbl_821CA1A8;


void fn_8286CBF0(unsigned int *param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  
  *(unsigned char *)(param_1 + 1) = 0;
  *param_1 = &lbl_8202151C;
  param_1[2] = lbl_821CA1A0;
  uVar2 = lbl_821AAD20;
  param_1[3] = lbl_821CA1A4;
  uVar1 = lbl_82002AE0;
  param_1[4] = lbl_821CA1A8;
  param_1[5] = lbl_821CA1A0;
  param_1[6] = lbl_821CA1A4;
  uVar3 = lbl_821CA1A8;
  *(unsigned char *)(param_1 + 8) = 0;
  param_1[7] = uVar3;
  param_1[9] = lbl_821CA1A0;
  param_1[10] = lbl_821CA1A4;
  uVar3 = lbl_821CA1A8;
  *(unsigned char *)(param_1 + 0xc) = 0;
  param_1[0xb] = uVar3;
  param_1[0xd] = lbl_821CA1A0;
  param_1[0xe] = lbl_821CA1A4;
  uVar3 = lbl_821CA1A8;
  param_1[0x10] = uVar2;
  param_1[0x11] = uVar2;
  *(unsigned char *)(param_1 + 0x16) = 0;
  param_1[0x12] = uVar2;
  *(unsigned char *)((int)param_1 + 0x59) = 0;
  param_1[0x13] = uVar2;
  *(unsigned char *)((int)param_1 + 0x5a) = 0;
  param_1[0x14] = uVar1;
  param_1[0xf] = uVar3;
  param_1[0x15] = uVar1;
  return;
}

