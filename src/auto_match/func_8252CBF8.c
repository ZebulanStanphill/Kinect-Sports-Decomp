extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


void fn_8252CBF8(double param_1,int param_2,unsigned __int64 *param_3,unsigned __int64 param_4,
                  __int64 param_5)

{
  unsigned int uVar1;
  float fVar2;
  __int64 lVar3;
  float *pfVar4;
  unsigned __int64 *puVar5;
  double dVar6;
  
  fVar2 = ltcg_pool_0_0f;
  uVar1 = lbl_821CA460;
  lVar3 = 2;
  pfVar4 = (float *)(param_2 + 0x210);
  dVar6 = (double)ltcg_pool_0_0f;
  puVar5 = (unsigned __int64 *)(param_2 + 0x1f8);
  do {
    if (param_1 == dVar6) {
      *(unsigned int *)(puVar5 + -1) = uVar1;
      *(unsigned int *)((int)puVar5 + -4) = uVar1;
      *(unsigned int *)puVar5 = uVar1;
      *(unsigned int *)((int)puVar5 + 4) = uVar1;
      *pfVar4 = fVar2;
    }
    else {
      puVar5[-1] = *param_3;
      *puVar5 = param_3[1];
      *pfVar4 = (float)param_1;
    }
    lVar3 = lVar3 + -1;
    puVar5 = puVar5 + 2;
    pfVar4 = pfVar4 + 1;
  } while (lVar3 != 0);
  *(unsigned int *)(param_2 + 0x1dc) = -(unsigned int)(param_5 != 0) & 2;
  return;
}

