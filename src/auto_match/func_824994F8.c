extern int fn_8248F890();
extern int fn_82497430();
extern unsigned int lbl_821BEBB8;
extern unsigned int lbl_821BEFDC;
extern unsigned int lbl_821CA460;
extern unsigned int uStack_30;


unsigned int * fn_824994F8(unsigned int *param_1)

{
  unsigned int uVar1;
  unsigned short uStack_30;
  
  *param_1 = &lbl_821BEFDC;
  param_1[5] = 0;
  param_1[4] = &lbl_821BEBB8;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(unsigned char *)(param_1 + 0x1c) = 0;
  *(unsigned char *)((int)param_1 + 0x71) = 0;
  *(unsigned char *)((int)param_1 + 0x72) = 0;
  *(unsigned short *)(param_1 + 0x24) = uStack_30;
  param_1[0x26] = 0;
  uVar1 = fn_8248F890(0xa0);
  param_1[0x25] = uVar1;
  *(unsigned int *)uVar1 = uVar1;
  *(unsigned int *)(param_1[0x25] + 4) = param_1[0x25];
  uVar1 = lbl_821CA460;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2e] = uVar1;
  fn_82497430(param_1 + 0x24,8);
  return param_1;
}

