extern int fn_822C70F0();
extern int fn_82301BE8();
extern unsigned int lbl_821AEDD8;
extern unsigned int ltcg_pool_0_0f;


unsigned int *
fn_823018E8(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             int param_5)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  __int64 lVar3;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  
  fn_822C70F0();
  param_1[0x15] = param_5;
  param_1[0x17] = 0;
  puVar2 = param_1 + 0x17;
  *param_1 = &lbl_821AEDD8;
  param_1[0x18] = 0;
  lVar3 = 4;
  do {
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2 = puVar2 + 4;
    *puVar2 = 0;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  puVar2 = param_1 + 0x28;
  lVar3 = 4;
  do {
    puVar2 = puVar2 + 0x11;
    *puVar2 = 0;
    uVar1 = ltcg_pool_0_0f;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  param_1[0x74] = ltcg_pool_0_0f;
  param_1[0x75] = uVar1;
  param_1[0x76] = uVar1;
  param_1[0x77] = uVar1;
  puVar2 = (unsigned int *)((unsigned int)(param_1 + 0x70) & 0xfffffff0);
  *puVar2 = in_register_000104d0;
  puVar2[1] = in_register_000104d4;
  puVar2[2] = in_register_000104d8;
  puVar2[3] = in_vr77;
  fn_82301BE8(param_1,(unsigned __int64)*(unsigned int *)(param_5 + 0x118) + 0x24,param_4);
  return param_1;
}

