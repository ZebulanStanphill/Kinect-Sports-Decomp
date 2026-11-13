extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_83265A28;


void fn_823345C0(int param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  
  fVar3 = ltcg_pool_0_0f;
  if ((*(float *)(param_1 + 0x234) == ltcg_pool_0_0f) && (*(int *)(param_1 + 0xc) == 1)) {
    iVar2 = **(int **)(*(int *)(param_1 + 0x230) + 0x238);
    fVar1 = *(float *)(iVar2 + 0xaac);
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    *(float *)(param_1 + 0x234) =
         (*(float *)(iVar2 + 0xab0) - fVar1) *
         ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) + fVar1;
  }
  if (*(float *)(param_1 + 0x228) <= *(float *)(param_1 + 0x234)) {
    return;
  }
  *(float *)(param_1 + 0x234) = fVar3;
  *(float *)(param_1 + 0x228) = fVar3;
  *(float *)(param_1 + 0x22c) = fVar3;
  *(unsigned int *)(param_1 + 0x224) = 1;
  return;
}

