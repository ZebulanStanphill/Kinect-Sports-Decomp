#define NAN(x) ((x) != (x))
extern unsigned int lbl_821954D8;
extern unsigned int ltcg_pool_0_0f;


void fn_82380548(double param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  
  fVar4 = ltcg_pool_0_0f;
  if (*(int *)(param_2 + 0x200) != 0) {
    fVar1 = (float)((double)*(float *)(param_2 + 0x200) - param_1);
    fVar3 = -fVar1;
    fVar2 = ltcg_pool_0_0f;
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)((fVar3 < ltcg_pool_0_0f) << 2) |
                  (unsigned int)(NAN(fVar3) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
      fVar2 = fVar1;
    }
    *(float *)(param_2 + 0x200) = fVar2;
  }
  if (*(int *)(param_2 + 0x1fc) != 0) {
    fVar1 = (float)((double)*(float *)(param_2 + 0x1fc) - param_1);
    fVar3 = -fVar1;
    fVar2 = fVar4;
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)((fVar3 < fVar4) << 2) | (unsigned int)(NAN(fVar3) || NAN(fVar4)) << 2)) <
        0.0) {
      fVar2 = fVar1;
    }
    *(float *)(param_2 + 0x1fc) = fVar2;
  }
  if (*(int *)(param_2 + 0x204) != 0) {
    fVar1 = (float)((double)*(float *)(param_2 + 0x204) - param_1);
    fVar3 = -fVar1;
    fVar2 = fVar4;
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)((fVar3 < fVar4) << 2) | (unsigned int)(NAN(fVar3) || NAN(fVar4)) << 2)) <
        0.0) {
      fVar2 = fVar1;
    }
    *(float *)(param_2 + 0x204) = fVar2;
  }
  uVar6 = *(unsigned int *)(param_2 + 0x20c);
  if ((int)uVar6 < 1) {
    return;
  }
  if (fVar4 < *(float *)(param_2 + 0x204)) {
    return;
  }
  uVar5 = -((int)(uVar6 - 1) >> 0x1f) - 1U & uVar6 - 1;
  if ((int)uVar5 < (int)uVar6) {
    uVar6 = uVar5;
  }
  *(unsigned int *)(param_2 + 0x20c) = uVar6;
  *(unsigned int *)(param_2 + 0x204) = *(unsigned int *)(param_2 + 0xa4);
  return;
}

