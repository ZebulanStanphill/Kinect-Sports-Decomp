extern int memcpy();
extern unsigned int lbl_821BCEAC;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831C6698;


unsigned int * fn_82475DB8(unsigned int *param_1,unsigned __int64 param_2,unsigned int param_3)

{
  float fVar1;
  unsigned int uVar2;
  float *pfVar3;
  unsigned int *puVar4;
  __int64 lVar5;
  double dVar6;
  
  param_1[1] = 2;
  fVar1 = ltcg_pool_0_0f;
  dVar6 = (double)ltcg_pool_0_0f;
  *param_1 = &lbl_821BCEAC;
  param_1[3] = fVar1;
  param_1[2] = 0;
  memcpy(param_1 + 4,param_2,0x50);
  param_1[0x2c] = (float)dVar6;
  param_1[0x2e] = (float)dVar6;
  param_1[0x18] = param_3;
  param_1[0x2b] = 0xffffffff;
  pfVar3 = (float *)(param_1 + 0x24);
  puVar4 = param_1 + 0x18;
  param_1[0x2d] = 0;
  uVar2 = lbl_831C6698;
  lVar5 = 2;
  do {
    puVar4[2] = (float)dVar6;
    puVar4[1] = 0;
    puVar4[3] = uVar2;
    puVar4[4] = (float)dVar6;
    puVar4[5] = (float)dVar6;
    puVar4 = puVar4 + 6;
    *puVar4 = 0;
    pfVar3[1] = 0.0;
    pfVar3 = pfVar3 + 2;
    *pfVar3 = (float)dVar6;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  param_1[0x2a] = (float)dVar6;
  param_1[0x29] = 0;
  param_1[0x30] = param_3;
  memcpy(param_1 + 0x31,param_2,0x50);
  return param_1;
}

