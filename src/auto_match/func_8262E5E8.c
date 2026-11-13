#define NAN(x) ((x) != (x))
extern unsigned int lbl_821954D8;
extern unsigned int ltcg_pool_0_0f;


void fn_8262E5E8(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar6 = ltcg_pool_0_0f;
  fVar3 = *param_2 - *param_1;
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar4 = *param_2;
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)((fVar3 < ltcg_pool_0_0f) << 2) |
                (unsigned int)(NAN(fVar3) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
    fVar4 = *param_1;
  }
  fVar5 = param_1[1];
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)((fVar3 < ltcg_pool_0_0f) << 2) |
                (unsigned int)(NAN(fVar3) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
    fVar5 = fVar4;
  }
  param_1[3] = fVar5;
  fVar3 = fVar1 - param_1[5];
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)((fVar3 < fVar6) << 2) | (unsigned int)(NAN(fVar3) || NAN(fVar6)) << 2)) < 0.0)
  {
    fVar1 = param_1[5];
  }
  fVar4 = param_1[6];
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)((fVar3 < fVar6) << 2) | (unsigned int)(NAN(fVar3) || NAN(fVar6)) << 2)) < 0.0)
  {
    fVar4 = fVar1;
  }
  param_1[8] = fVar4;
  fVar1 = fVar2 - param_1[10];
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)((fVar1 < fVar6) << 2) | (unsigned int)(NAN(fVar1) || NAN(fVar6)) << 2)) < 0.0)
  {
    fVar2 = param_1[10];
  }
  fVar3 = param_1[0xb];
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)((fVar1 < fVar6) << 2) | (unsigned int)(NAN(fVar1) || NAN(fVar6)) << 2)) < 0.0)
  {
    fVar3 = fVar2;
  }
  param_1[0xd] = fVar3;
  return;
}

