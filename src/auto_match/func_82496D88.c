extern int fn_8248F890();
extern int fn_82497430();
extern unsigned int lbl_821BEBB0;
extern unsigned int lbl_821BEF18;
extern unsigned int lbl_821BEF34;
extern unsigned int lbl_821CA460;
extern unsigned int uStack_30;


unsigned int * fn_82496D88(unsigned int *param_1,unsigned int param_2)

{
  unsigned int uVar1;
  unsigned short uStack_30;
  
  *param_1 = &lbl_821BEF34;
  param_1[2] = 0;
  param_1[1] = &lbl_821BEBB0;
  param_1[9] = 0;
  *(unsigned short *)(param_1 + 10) = uStack_30;
  param_1[0xc] = 0;
  uVar1 = fn_8248F890(0x30);
  param_1[0xb] = uVar1;
  *(unsigned int *)uVar1 = uVar1;
  *(unsigned int *)(param_1[0xb] + 4) = param_1[0xb];
  uVar1 = lbl_821CA460;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x14] = uVar1;
  fn_82497430(param_1 + 10,8);
  param_1[0x15] = param_2;
  param_1[0x16] = 0;
  *param_1 = &lbl_821BEF18;
  return param_1;
}

