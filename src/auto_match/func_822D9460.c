extern unsigned int *auStack_60;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822C70F0();
extern int fn_822DB128();
extern int fn_8234E590();
extern int fn_82365BD8();
extern int fn_82F68CC0();
extern unsigned int lbl_821ADAF0;
extern unsigned int lbl_821CA1A0;
extern unsigned int lbl_821CA1A4;
extern unsigned int lbl_821CA1A8;
extern unsigned int ltcg_pool_0_0f;


unsigned int *
fn_822D9460(unsigned int *param_1,unsigned __int64 param_2,int param_3,int param_4,unsigned int param_5,
             unsigned __int64 param_6,unsigned __int64 param_7)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  float fVar3;
  double dVar4;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  unsigned char auStack_60 [96];
  
  fn_822C70F0();
  *param_1 = &lbl_821ADAF0;
  fn_82230110(auStack_60,0xffffffff821acfe8);
  fn_8234E590(param_1 + 0x15,auStack_60,*(unsigned int *)(param_3 + 8),
                    *(unsigned int *)(param_3 + 0xc),*(unsigned int *)(param_4 + 0x118));
  fn_82230300(auStack_60,1,0);
  param_1[0x27] = param_4;
  param_1[0x28] = param_5;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  puVar1 = (unsigned int *)((unsigned int)(param_1 + 0x30) & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  fn_82365BD8(param_1 + 0x34,param_7);
  fVar3 = ltcg_pool_0_0f;
  dVar4 = (double)ltcg_pool_0_0f;
  param_1[0x3c] = ltcg_pool_0_0f;
  param_1[0x3e] = fVar3;
  puVar1 = (unsigned int *)((unsigned int)(param_1 + 0x38) & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  fn_82F68CC0(param_1 + 0x40,0xffffffff8329ead0,0x40);
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  puVar1 = (unsigned int *)((unsigned int)(param_1 + 0x5c) & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  puVar1 = (unsigned int *)((unsigned int)(param_1 + 0x58) & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  param_1[0x60] = lbl_821CA1A0;
  param_1[0x61] = lbl_821CA1A4;
  uVar2 = lbl_821CA1A8;
  param_1[0x68] = (float)dVar4;
  param_1[99] = 0;
  puVar1 = (unsigned int *)((unsigned int)(param_1 + 100) & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 1;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x62] = uVar2;
  fn_822DB128(param_1,param_6);
  return param_1;
}

