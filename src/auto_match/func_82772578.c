extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8200D8DC;
extern unsigned int lbl_82015270;
extern unsigned int lbl_821AAD20;


void fn_82772578(unsigned int *param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  param_1[1] = 1;
  *param_1 = &lbl_82015270;
  uVar1 = lbl_82002AE0;
  param_1[3] = lbl_8200D8DC;
  param_1[2] = uVar1;
  param_1[4] = 0;
  uVar2 = lbl_821AAD20;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xf] = uVar1;
  param_1[0x10] = uVar1;
  param_1[0xc] = 0;
  param_1[0x11] = uVar2;
  param_1[0xd] = 0x7fffffff;
  param_1[0x12] = uVar2;
  param_1[0xe] = 0x80000001;
  *(unsigned char *)(param_1 + 0x13) = 0;
  return;
}

