extern unsigned int lbl_8202E618;
extern unsigned int lbl_8202E61C;
extern unsigned int lbl_8202E620;
extern unsigned int lbl_8202E624;
extern unsigned int lbl_820AA970;


void fn_82A81918(unsigned int *param_1,unsigned int param_2)

{
  int iVar1;
  unsigned int uVar2;
  
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &lbl_820AA970;
  param_1[4] = 0;
  param_1[5] = param_1 + 6;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 1;
  param_1[6] = 0;
  iVar1 = param_1[5];
  *(unsigned int *)(iVar1 + 8) = param_1[4];
  param_1[4] = iVar1 + 4;
  param_1[0xe] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0xf] = param_1 + 0x10;
  param_1[0x17] = 1;
  param_1[0x10] = 0;
  iVar1 = param_1[0xf];
  *(unsigned int *)(iVar1 + 8) = param_1[0xe];
  param_1[0xe] = iVar1 + 4;
  param_1[0x18] = 1;
  param_1[0x19] = lbl_8202E618;
  param_1[0x1a] = lbl_8202E61C;
  param_1[0x1b] = lbl_8202E620;
  uVar2 = lbl_8202E624;
  param_1[0x1d] = 1;
  param_1[0x1c] = uVar2;
  return;
}

