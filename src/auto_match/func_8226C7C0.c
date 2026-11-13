#define NAN(x) ((x) != (x))
extern unsigned int lbl_821954D8;
extern unsigned int ltcg_pool_0_0f;


void fn_8226C7C0(int param_1,float *param_2,float *param_3,char param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = (float)(__int64)
                 ((*param_2 - *(float *)(param_1 + 100)) / *(float *)(param_1 + 0x6c) +
                 *(float *)(param_1 + 0x5c));
  fVar4 = (float)(__int64)
                 ((param_2[1] - *(float *)(param_1 + 0x68)) / *(float *)(param_1 + 0x70) +
                 *(float *)(param_1 + 0x60));
  *param_3 = fVar1;
  param_3[1] = fVar4;
  fVar6 = ltcg_pool_0_0f;
  if (param_4 == '\0') {
    return;
  }
  fVar3 = (float)(__int64)(*(int *)(param_1 + 0x48) + -1);
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)((fVar1 < ltcg_pool_0_0f) << 2) |
                (unsigned int)(NAN(fVar1) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
    fVar1 = ltcg_pool_0_0f;
  }
  fVar2 = fVar1 - fVar3;
  fVar5 = (float)(__int64)(*(int *)(param_1 + 0x4c) + -1);
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)((fVar4 < ltcg_pool_0_0f) << 2) |
                (unsigned int)(NAN(fVar4) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
    fVar4 = ltcg_pool_0_0f;
  }
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)((fVar2 < ltcg_pool_0_0f) << 2) |
                (unsigned int)(NAN(fVar2) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
    fVar3 = fVar1;
  }
  *param_3 = fVar3;
  fVar1 = fVar4 - fVar5;
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)((fVar1 < fVar6) << 2) | (unsigned int)(NAN(fVar1) || NAN(fVar6)) << 2)) < 0.0)
  {
    fVar5 = fVar4;
  }
  param_3[1] = fVar5;
  return;
}

