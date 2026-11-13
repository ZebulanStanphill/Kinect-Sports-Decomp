#define NAN(x) ((x) != (x))
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


void fn_825F8F80(double param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = lbl_821CA460;
  fVar1 = (float)((double)param_2[6] * param_1 + (double)param_2[7]);
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)((fVar1 < ltcg_pool_0_0f) << 2) |
                (unsigned int)(NAN(fVar1) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
    fVar1 = ltcg_pool_0_0f;
  }
  fVar2 = lbl_821CA460;
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)((fVar1 - lbl_821CA460 < ltcg_pool_0_0f) << 2) |
                (unsigned int)(NAN(fVar1 - lbl_821CA460) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
    fVar2 = fVar1;
  }
  param_2[7] = fVar2;
  param_2[4] = param_2[2] * fVar2 + *param_2 * (fVar3 - fVar2);
  param_2[5] = param_2[3] * fVar2 + param_2[1] * (fVar3 - fVar2);
  return;
}

