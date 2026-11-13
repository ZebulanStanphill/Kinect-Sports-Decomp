extern unsigned int iStack_c;
extern unsigned int lbl_82195598;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


double fn_825B98E0(double param_1,unsigned short *param_2,unsigned __int64 param_3,unsigned int *param_4,
                    unsigned int *param_5)

{
  float fVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  double dVar4;
  double dVar5;
  int iStack_c;
  
  uVar3 = (unsigned int)*param_2;
  if (uVar3 == 1) {
    uVar2 = **(unsigned int **)(param_2 + 4);
    *param_5 = uVar2;
    dVar4 = (double)ltcg_pool_0_0f;
    *param_4 = uVar2;
    return dVar4;
  }
  dVar4 = (double)lbl_821CA460;
  fVar1 = (float)((double)*param_2 - dVar4);
  dVar5 = (double)(fVar1 * (float)(param_1 / (double)*(float *)(param_2 + 2)));
  iStack_c = (int)(__int64)(fVar1 * (float)(param_1 / (double)*(float *)(param_2 + 2)));
  if (iStack_c == 0) {
    *param_4 = **(unsigned int **)(param_2 + 4);
    dVar4 = (double)ltcg_pool_0_0f;
    uVar2 = *(unsigned int *)(*(int *)(param_2 + 4) + 4);
  }
  else {
    if (iStack_c != uVar3 - 1) {
      dVar4 = dVar5 - lbl_82195598;
      *param_4 = *(unsigned int *)(iStack_c * 4 + *(int *)(param_2 + 4));
      *param_5 = *(unsigned int *)(iStack_c * 4 + *(int *)(param_2 + 4) + 4);
      return (double)(float)(dVar5 - (double)(__int64)dVar4);
    }
    *param_4 = *(unsigned int *)((uVar3 - 2) * 4 + *(int *)(param_2 + 4));
    uVar2 = *(unsigned int *)((unsigned int)*param_2 * 4 + *(int *)(param_2 + 4) + -4);
  }
  *param_5 = uVar2;
  return dVar4;
}

