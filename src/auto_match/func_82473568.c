extern int fn_82266D28();
extern int fn_82F68CC0();
extern unsigned int lbl_821BCE54;
extern unsigned int ltcg_pool_0_0f;


unsigned int * fn_82473568(unsigned int *param_1,unsigned int *param_2,unsigned int param_3)

{
  float fVar1;
  float *pfVar2;
  __int64 lVar3;
  double dVar4;
  
  param_1[1] = 1;
  fVar1 = ltcg_pool_0_0f;
  dVar4 = (double)ltcg_pool_0_0f;
  *param_1 = &lbl_821BCE54;
  param_1[3] = fVar1;
  param_1[2] = 0;
  fn_82F68CC0(param_1 + 4,param_2,0x18);
  param_1[10] = param_3;
  pfVar2 = (float *)(param_1 + 10);
  lVar3 = 2;
  param_1[0xf] = param_2[2];
  param_1[0x10] = 0;
  do {
    pfVar2[1] = 0.0;
    pfVar2 = pfVar2 + 2;
    *pfVar2 = (float)dVar4;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  param_1[0x13] = (float)dVar4;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  fn_82266D28(param_1 + 0x14,0);
  param_1[0x16] = *param_2;
  param_1[0x17] = param_2[1];
  fn_82F68CC0(param_1 + 0x19,param_2,0x18);
  param_1[0x24] = (float)dVar4;
  param_1[0x1f] = param_3;
  param_1[0x20] = 0xffffffff;
  param_1[0x21] = 0xffffffff;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  return param_1;
}

