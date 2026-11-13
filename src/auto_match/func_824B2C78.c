extern int fn_824B3F18();
extern unsigned int lbl_8218E2B0;
extern unsigned int lbl_821922D0;
extern unsigned int lbl_821C01DC;
extern unsigned int ltcg_pool_0_0f;


unsigned int * fn_824B2C78(unsigned int *param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  *param_1 = &lbl_821C01DC;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  fn_824B3F18(param_1 + 1);
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0x18] = 0;
  uVar2 = ltcg_pool_0_0f;
  param_1[0x1d] = 0;
  uVar1 = lbl_8218E2B0;
  param_1[0x1e] = 0;
  param_1[7] = uVar2;
  param_1[0x20] = 0;
  param_1[0x1a] = uVar2;
  param_1[0x1b] = uVar2;
  param_1[0x1c] = uVar2;
  param_1[0x1f] = uVar2;
  param_1[0x21] = uVar2;
  param_1[0x22] = uVar2;
  param_1[0x19] = uVar1;
  uVar2 = lbl_821922D0;
  param_1[0x23] = *(unsigned int *)(param_2 + 0x48);
  uVar1 = *(unsigned int *)(param_2 + 0x4c);
  *(unsigned char *)(param_1 + 0xc) = 0;
  param_1[0x24] = uVar1;
  param_1[0xe] = 0;
  param_1[0xd] = uVar2;
  param_1[0xf] = 0;
  return param_1;
}

