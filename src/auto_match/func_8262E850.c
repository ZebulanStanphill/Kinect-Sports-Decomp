#define NAN(x) ((x) != (x))
extern unsigned int lbl_821954D8;
extern unsigned int ltcg_pool_0_0f;


void fn_8262E850(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = ltcg_pool_0_0f;
  fVar2 = param_1[4];
  if (((unsigned int)fVar2 & 4) == 0) {
    fVar1 = param_1[1];
    if (((unsigned int)fVar2 & 8) == 0) {
      param_1[4] = (float)((unsigned int)fVar2 & 1);
    }
    else {
      if (fVar1 < param_1[3]) {
        do {
          fVar2 = param_1[3] - (fVar1 - *param_1);
          param_1[3] = fVar2;
        } while (param_1[1] < fVar2);
      }
      fVar3 = param_1[3] - *param_1;
      fVar2 = param_1[3];
      if (*(float *)(&lbl_821954D8 +
                    ((unsigned int)(unsigned char)((fVar3 < ltcg_pool_0_0f) << 2) |
                    (unsigned int)(NAN(fVar3) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
        fVar2 = *param_1;
      }
      if (*(float *)(&lbl_821954D8 +
                    ((unsigned int)(unsigned char)((fVar3 < ltcg_pool_0_0f) << 2) |
                    (unsigned int)(NAN(fVar3) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
        fVar1 = fVar2;
      }
    }
  }
  else {
    fVar1 = param_1[1];
    param_1[4] = (float)((unsigned int)fVar2 & 0xfffffffc | 2);
    fVar2 = fVar1 - (param_1[3] - fVar1);
    param_1[3] = fVar2;
    fVar4 = fVar2 - *param_1;
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)((fVar4 < fVar3) << 2) | (unsigned int)(NAN(fVar4) || NAN(fVar3)) << 2)) <
        0.0) {
      fVar2 = *param_1;
    }
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)((fVar4 < fVar3) << 2) | (unsigned int)(NAN(fVar4) || NAN(fVar3)) << 2)) <
        0.0) {
      fVar1 = fVar2;
    }
  }
  param_1[3] = fVar1;
  return;
}

