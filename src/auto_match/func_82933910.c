extern unsigned int lbl_8202F1B8;


void fn_82933910(unsigned int *param_1,unsigned __int64 *param_2,unsigned int param_3,unsigned int param_4)

{
  unsigned __int64 uVar1;
  
  param_1[2] = 0;
  param_1[1] = 0x10;
  *param_1 = &lbl_8202F1B8;
  param_1[3] = 0;
  *(unsigned __int64 *)(param_1 + 4) = *param_2;
  *(unsigned __int64 *)(param_1 + 6) = param_2[1];
  *(unsigned __int64 *)(param_1 + 8) = param_2[2];
  uVar1 = param_2[3];
  param_1[0xc] = param_3;
  param_1[0xd] = param_4;
  *(unsigned __int64 *)(param_1 + 10) = uVar1;
  return;
}

