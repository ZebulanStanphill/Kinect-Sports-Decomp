extern unsigned int lbl_82196290;
extern unsigned int lbl_82196298;
extern unsigned int lbl_821C3738;
extern unsigned int ltcg_pool_0_0f;


void fn_8252DAB8(unsigned int *param_1)

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  
  *param_1 = &lbl_821C3738;
  param_1[0x6f] = 0;
  *(unsigned __int64 *)(param_1 + 8) = lbl_82196290;
  *(unsigned __int64 *)(param_1 + 10) = lbl_82196298;
  uVar2 = ltcg_pool_0_0f;
  param_1[0x18] = 0;
  *(unsigned __int64 *)(param_1 + 0x10) = lbl_82196290;
  *(unsigned __int64 *)(param_1 + 0x12) = lbl_82196298;
  *(unsigned __int64 *)(param_1 + 0xc) = lbl_82196290;
  *(unsigned __int64 *)(param_1 + 0xe) = lbl_82196298;
  *(unsigned __int64 *)(param_1 + 0x14) = lbl_82196290;
  uVar1 = lbl_82196298;
  param_1[0x19] = uVar2;
  param_1[0x1a] = uVar2;
  param_1[0x1c] = 0;
  param_1[0x1b] = uVar2;
  param_1[0x1e] = 0;
  param_1[0x1d] = uVar2;
  *(unsigned __int64 *)(param_1 + 0x16) = uVar1;
  param_1[0x47] = param_1;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x66] = param_1;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  return;
}

