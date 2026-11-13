extern int fn_8248F890();
extern int fn_82497430();
extern int fn_82F68CC0();
extern unsigned int lbl_821BEBB0;
extern unsigned int lbl_821BEF50;
extern unsigned int lbl_821BEF6C;
extern unsigned int lbl_821CA460;
extern unsigned int uStack_40;


unsigned int * fn_824978B8(unsigned int *param_1,int *param_2,unsigned int param_3,unsigned int param_4)

{
  unsigned int uVar1;
  unsigned short uStack_40;
  
  *param_1 = &lbl_821BEF6C;
  param_1[2] = 0;
  param_1[1] = &lbl_821BEBB0;
  *(unsigned short *)(param_1 + 9) = uStack_40;
  param_1[0xb] = 0;
  uVar1 = fn_8248F890(0x2c);
  param_1[10] = uVar1;
  *(unsigned int *)uVar1 = uVar1;
  *(unsigned int *)(param_1[10] + 4) = param_1[10];
  uVar1 = lbl_821CA460;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x13] = uVar1;
  fn_82497430(param_1 + 9,8);
  *param_1 = &lbl_821BEF50;
  fn_82F68CC0(param_1 + 0x14,*(unsigned int *)(*param_2 + 4),0x1d0);
  param_1[0x88] = *(unsigned int *)(*(int *)(*param_2 + 0xc) + 0x144);
  param_1[0x89] = *(unsigned int *)(*(int *)(*param_2 + 0xc) + 0x15c);
  param_1[0x8a] = param_4;
  param_1[0x8b] = param_2;
  param_1[0x8c] = param_3;
  param_1[0x8d] = 0;
  return param_1;
}

