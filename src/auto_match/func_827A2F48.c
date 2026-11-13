extern unsigned int lbl_8200133C;
extern unsigned int lbl_82005710;
extern unsigned int lbl_82015C00;
extern unsigned int lbl_821AAD20;


void fn_827A2F48(unsigned int *param_1,int param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  
  param_1[1] = 1;
  *param_1 = &lbl_82015C00;
  if (param_2 != 0) {
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
  }
  param_1[2] = param_2;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar3 = lbl_821AAD20;
  *(unsigned short *)(param_1 + 0xd) = 0;
  param_1[9] = uVar3;
  param_1[10] = uVar3;
  param_1[0xb] = uVar3;
  param_1[0xc] = uVar3;
  *(unsigned short *)(param_1 + 0x1a) = 0;
  uVar2 = lbl_82005710;
  param_1[6] = 0;
  *(unsigned __int64 *)(param_1 + 0xe) = uVar2;
  param_1[7] = 0xff000000;
  param_1[0x15] = 0;
  uVar1 = lbl_8200133C;
  *(unsigned __int64 *)(param_1 + 0x10) = uVar2;
  param_1[0x12] = uVar1;
  param_1[9] = uVar3;
  param_1[10] = uVar3;
  param_1[0xb] = uVar3;
  param_1[0xc] = uVar3;
  param_1[0x16] = 0xff000000;
  param_1[0x17] = 0xffffffff;
  param_1[0x18] = 0xff808080;
  param_1[0x19] = 0xffffffff;
  return;
}

