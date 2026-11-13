typedef unsigned char bool;
#define NAN(x) ((x) != (x))
extern float lbl_8218E8E8;
extern unsigned int lbl_821954D8;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_8326F968;
extern unsigned int lbl_8326F96C;


void fn_8262EA08(double param_1,double param_2,float *param_3)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  unsigned char bVar6;
  
  if (param_1 <= param_2) {
    if (param_1 < param_2) {
      *param_3 = (float)param_1;
      param_3[1] = (float)param_2;
      goto code_r0x8262ea38;
    }
    param_3[4] = (float)((unsigned int)param_3[4] & 0xfffffffc);
  }
  param_3[1] = (float)param_1;
  *param_3 = (float)param_2;
code_r0x8262ea38:
  fVar2 = *param_3;
  fVar3 = param_3[3] - fVar2;
  bVar1 = lbl_8326F968 == 0;
  fVar4 = param_3[3];
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)((fVar3 < ltcg_pool_0_0f) << 2) |
                (unsigned int)(NAN(fVar3) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
    fVar4 = fVar2;
  }
  fVar5 = param_3[1];
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)((fVar3 < ltcg_pool_0_0f) << 2) |
                (unsigned int)(NAN(fVar3) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
    fVar5 = fVar4;
  }
  param_3[3] = fVar5;
  if ((bVar1) || (bVar6 = 1, lbl_8326F96C != 0)) {
    bVar6 = 0;
  }
  fVar2 = (float)(__int64)(int)((-(unsigned int)bVar6 & 0xfffffff6) + 0x3c) * lbl_8218E8E8 *
          (param_3[1] - fVar2);
  if (param_3[2] <= fVar2) {
    return;
  }
  param_3[2] = fVar2;
  return;
}

