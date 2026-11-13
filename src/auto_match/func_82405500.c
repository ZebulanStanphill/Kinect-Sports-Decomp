extern int fn_82359698();
extern int fn_82405638();
extern int fn_82405898();
extern int fn_82405A10();
extern unsigned int ltcg_pool_0_0f;


void fn_82405500(double param_1,int param_2)

{
  float fVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned __int64 uVar4;
  
  uVar2 = *(unsigned int *)(param_2 + 0x18);
  if (7 < uVar2) {
    return;
  }
  if (uVar2 == 0) {
    if (*(int *)(*(int *)(*(int *)(param_2 + 0x10) + 0x78) + 0xc) != 0) {
      return;
    }
  }
  else {
    if (uVar2 == 1) {
      fVar1 = (float)((double)*(float *)(param_2 + 0x34) - param_1);
      *(float *)(param_2 + 0x34) = fVar1;
      if (ltcg_pool_0_0f < fVar1) {
        return;
      }
      uVar4 = 2;
      goto LAB_82405618;
    }
    if (uVar2 == 2) {
      fn_82405898(param_2);
      return;
    }
    if (uVar2 == 3) {
      fVar1 = (float)((double)*(float *)(param_2 + 0x34) - param_1);
      *(float *)(param_2 + 0x34) = fVar1;
      if (ltcg_pool_0_0f < fVar1) {
        return;
      }
      uVar4 = 4;
      goto LAB_82405618;
    }
    if (uVar2 == 4) {
      fn_82405A10(param_2);
      return;
    }
    if ((uVar2 != 5) && (uVar2 != 6)) {
      fVar1 = (float)((double)*(float *)(param_2 + 0x34) - param_1);
      *(float *)(param_2 + 0x34) = fVar1;
      if (ltcg_pool_0_0f < fVar1) {
        return;
      }
      iVar3 = *(int *)(param_2 + 8);
      *(unsigned int *)(iVar3 + 1000) = 1;
      fn_82359698(iVar3,1);
      uVar4 = 8;
      goto LAB_82405618;
    }
    fVar1 = (float)((double)*(float *)(param_2 + 0x34) - param_1);
    *(float *)(param_2 + 0x34) = fVar1;
    if (ltcg_pool_0_0f < fVar1) {
      return;
    }
  }
  uVar4 = 1;
LAB_82405618:
  fn_82405638(param_2,uVar4);
  return;
}

