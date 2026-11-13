extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82089FC8;


void fn_82A512B8(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
  int iVar1;
  unsigned int uVar2;
  
  param_1[1] = 1;
  *param_1 = &lbl_82089FC8;
  param_1[2] = 0;
  uVar2 = lbl_82002AE0;
  param_1[3] = param_1 + 4;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 1;
  param_1[4] = 0;
  iVar1 = param_1[3];
  *(unsigned int *)(iVar1 + 8) = param_1[2];
  param_1[2] = iVar1 + 4;
  param_1[0x12] = uVar2;
  param_1[0xc] = param_2;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = param_3;
  param_1[0x10] = param_4;
  param_1[0x11] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = param_1 + 0x16;
  param_1[0x1d] = 1;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x16] = 0;
  iVar1 = param_1[0x15];
  *(unsigned int *)(iVar1 + 8) = param_1[0x14];
  param_1[0x14] = iVar1 + 4;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  return;
}

