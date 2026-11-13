extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


void fn_8260E780(int param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4,int param_5)

{
  float fVar1;
  
  if (param_5 == 0) {
    *(unsigned int *)(param_3 + 0x1c) = 1;
  }
  fVar1 = ltcg_pool_0_0f;
  if (*(int *)(param_3 + 0x1c) == 0) {
    return;
  }
  if (*(int *)(param_3 + 0x24) == *(int *)(param_3 + 0x14)) {
    if (ltcg_pool_0_0f < *(float *)(param_3 + 0x18)) {
      *(float *)(param_3 + 0x18) =
           *(float *)(param_3 + 0x18) -
           (*(float *)(param_1 + 0x88) - *(float *)(param_3 + 4)) /
           (*(float *)(param_3 + 8) - *(float *)(param_3 + 4));
    }
    if (*(float *)(param_3 + 0x18) < fVar1) {
      *(float *)(param_3 + 0x18) = fVar1;
      *(unsigned int *)(param_3 + 0x1c) = 0;
    }
  }
  else {
    *(int *)(param_3 + 0x20) = *(int *)(param_3 + 0x24);
    *(unsigned int *)(param_3 + 0x18) = lbl_821CA460;
  }
  *(int *)(param_3 + 0x24) = *(int *)(param_3 + 0x14);
  return;
}

