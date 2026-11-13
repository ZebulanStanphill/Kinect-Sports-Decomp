extern int fn_82313630();
extern unsigned int lbl_821AF4E8;
extern unsigned int lbl_821AF508;
extern unsigned int lbl_821AF518;
extern unsigned int lbl_821AF538;
extern unsigned int ltcg_pool_0_0f;


unsigned int *
fn_82314208(unsigned int *param_1,unsigned int param_2,int param_3,unsigned int param_4,
             unsigned int param_5,unsigned int param_6)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  
  uVar1 = *(unsigned int *)(param_3 + 0x114);
  param_1[3] = param_3;
  param_1[4] = param_4;
  param_1[1] = param_2;
  param_1[2] = uVar1;
  *param_1 = &lbl_821AF4E8;
  uVar1 = ltcg_pool_0_0f;
  param_1[5] = &lbl_821AF508;
  param_1[0x12] = uVar1;
  param_1[8] = &lbl_821AF518;
  param_1[0x10] = param_5;
  puVar2 = (unsigned int *)((unsigned int)(param_1 + 0xc) & 0xfffffff0);
  *puVar2 = in_register_000104d0;
  puVar2[1] = in_register_000104d4;
  puVar2[2] = in_register_000104d8;
  puVar2[3] = in_vr77;
  param_1[0x11] = 0;
  fn_82313630(param_1 + 0x14);
  param_1[0x4c] = &lbl_821AF538;
  param_1[0x4d] = param_6;
  param_1[0x52] = param_6;
  param_1[0x53] = 0xffffffff;
  param_1[0x4e] = param_1 + 5;
  param_1[0x4f] = param_1 + 8;
  param_1[0x50] = param_1 + 0x14;
  param_1[0x51] = param_1 + 0x4c;
  return param_1;
}

