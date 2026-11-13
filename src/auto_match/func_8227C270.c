extern unsigned int ltcg_pool_0_0f;


unsigned __int64 fn_8227C270(int *param_1,int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(param_2 + 0xc);
  if ((fVar1 <= ltcg_pool_0_0f) &&
     ((*(int *)(*param_1 + 0xa64) == 1 || (*(int *)(*param_1 + 0xa64) == 2)))) {
    return 0;
  }
  fVar2 = *(float *)(param_3 + 0xc);
  if ((fVar2 <= ltcg_pool_0_0f) &&
     ((*(int *)(*param_1 + 0xa64) == 1 || (*(int *)(*param_1 + 0xa64) == 2)))) {
    return 1;
  }
  if (*(int *)(*param_1 + 0xa64) == 2) {
    if (fVar1 < fVar2) {
      return 1;
    }
  }
  else if (fVar2 < fVar1) {
    return 1;
  }
  return 0;
}

