extern unsigned int *auStack_10;
extern unsigned int lbl_8218E8E8;
extern unsigned int ltcg_pool_0_0f;


void fn_825B9EF8(unsigned int *param_1,unsigned __int64 param_2,int param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  float fVar3;
  unsigned __int64 uVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  __int64 lVar7;
  unsigned int auStack_10 [4];
  
  fVar3 = ltcg_pool_0_0f;
  uVar2 = lbl_8218E8E8;
  if (param_3 != 0) {
    uVar4 = 1;
    lVar7 = 4;
    do {
      puVar6 = param_1 + 1;
      if (((uVar4 & param_2) != 0) &&
         (uVar1 = *puVar6, *puVar6 = (unsigned int)((unsigned __int64)uVar1 - 1), (unsigned __int64)uVar1 - 1 == 0)) {
        param_1[5] = uVar2;
      }
      uVar4 = (uVar4 & 0x7fffffff) << 1;
      lVar7 = lVar7 + -1;
      param_1 = puVar6;
    } while (lVar7 != 0);
    return;
  }
  uVar4 = 1;
  puVar6 = auStack_10;
  lVar7 = 4;
  do {
    puVar5 = param_1 + 1;
    *puVar6 = 0;
    if (((uVar4 & param_2) != 0) && (uVar2 = *puVar5, *puVar5 = uVar2 + 1, uVar2 + 1 == 1)) {
      *puVar6 = (unsigned int)((float)param_1[5] == fVar3);
    }
    puVar6 = puVar6 + 1;
    uVar4 = (uVar4 & 0x7fffffff) << 1;
    lVar7 = lVar7 + -1;
    param_1 = puVar5;
  } while (lVar7 != 0);
  return;
}

