extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8217BB44;
extern unsigned int lbl_8217D1DC;


void fn_83034A58(unsigned int *param_1,unsigned int param_2)

{
  unsigned int uVar1;
  
  param_1[1] = 0;
  *param_1 = &lbl_8217D1DC;
  param_1[3] = 0;
  *(unsigned short *)(param_1 + 4) = 0;
  *(unsigned char *)((int)param_1 + 0x12) = 1;
  *(unsigned char *)((int)param_1 + 0x13) = 0x1f;
  uVar1 = lbl_82002AE0;
  param_1[2] = &lbl_8217BB44;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x14] = uVar1;
  param_1[0x15] = uVar1;
  param_1[0x16] = param_2;
  param_1[0x17] = 1;
  return;
}

