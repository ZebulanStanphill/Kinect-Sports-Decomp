extern int fn_82791EF0();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


unsigned int * fn_8279B5B8(unsigned int *param_1,unsigned int param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = lbl_821AAD20;
  param_1[2] = 0;
  param_1[4] = uVar1;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0x10] = uVar1;
  param_1[0xb] = param_2;
  param_1[0x11] = uVar1;
  param_1[0x12] = uVar1;
  param_1[0xc] = (int)param_3;
  param_1[8] = 0xffffffff;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  fn_82791EF0(param_1 + 0x13,param_3,0);
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(unsigned short *)(param_1 + 0x1d) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  uVar1 = lbl_82002AE0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x28] = uVar1;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(unsigned char *)(param_1 + 0x29) = 0;
  *(unsigned char *)((int)param_1 + 0xa5) = 0;
  param_1[0x2a] = 0;
  return param_1;
}

