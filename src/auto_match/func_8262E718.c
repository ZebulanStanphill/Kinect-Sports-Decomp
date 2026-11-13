#define NAN(x) ((x) != (x))
extern unsigned int lbl_821954D8;
extern unsigned int ltcg_pool_0_0f;


void fn_8262E718(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar3 = ltcg_pool_0_0f;
  fVar4 = param_1[4];
  if (((unsigned int)fVar4 & 4) == 0) {
    fVar3 = *param_1;
    if (((unsigned int)fVar4 & 8) == 0) {
      param_1[4] = (float)((unsigned int)fVar4 & 2);
      goto LAB_8262e844;
    }
    if (param_1[3] < fVar3) {
      do {
        fVar4 = param_1[3] + (param_1[1] - fVar3);
        param_1[3] = fVar4;
      } while (fVar4 < *param_1);
    }
    fVar2 = param_1[1];
    fVar1 = param_1[3] - fVar3;
    fVar4 = param_1[3];
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)((fVar1 < ltcg_pool_0_0f) << 2) |
                  (unsigned int)(NAN(fVar1) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
      fVar4 = fVar3;
    }
    fVar1 = *(float *)(&lbl_821954D8 +
                      ((unsigned int)(unsigned char)((fVar1 < ltcg_pool_0_0f) << 2) |
                      (unsigned int)(NAN(fVar1) || NAN(ltcg_pool_0_0f)) << 2));
  }
  else {
    fVar1 = *param_1;
    fVar2 = param_1[1];
    param_1[4] = (float)((unsigned int)fVar4 & 0xfffffffc | 1);
    fVar4 = (fVar1 - param_1[3]) + fVar1;
    param_1[3] = fVar4;
    fVar5 = fVar4 - fVar1;
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)((fVar5 < fVar3) << 2) | (unsigned int)(NAN(fVar5) || NAN(fVar3)) << 2)) <
        0.0) {
      fVar4 = fVar1;
    }
    fVar1 = *(float *)(&lbl_821954D8 +
                      ((unsigned int)(unsigned char)((fVar5 < fVar3) << 2) | (unsigned int)(NAN(fVar5) || NAN(fVar3)) << 2));
  }
  fVar3 = fVar2;
  if (fVar1 < 0.0) {
    fVar3 = fVar4;
  }
LAB_8262e844:
  param_1[3] = fVar3;
  return;
}

