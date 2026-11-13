extern unsigned int ltcg_pool_0_0f;


unsigned __int64 fn_82436BB0(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = **(int **)(param_1 + 0x40);
  iVar3 = *(int *)(iVar2 + 0xa0);
  if ((((iVar3 != 0) && (*(int *)(iVar3 + 0x40) == 1)) &&
      (iVar2 = *(int *)(iVar2 + 0xa0), iVar2 != 0)) &&
     ((fVar1 = *(float *)(iVar2 + 0x148), ltcg_pool_0_0f < fVar1 &&
      (fVar1 < (float)(*(int **)(param_1 + 0x40))[0x62])))) {
    return 1;
  }
  return 0;
}

