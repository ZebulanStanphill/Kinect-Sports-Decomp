extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


unsigned __int64 fn_8253AE20(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = *param_1 - *param_2;
  fVar4 = param_4[2] - param_3[2];
  fVar2 = param_2[2] - param_1[2];
  fVar5 = *param_3 - *param_4;
  fVar3 = *param_2 * param_1[2] - *param_1 * param_2[2];
  fVar6 = *param_4 * param_3[2] - *param_3 * param_4[2];
  fVar7 = fVar5 * fVar2 - fVar4 * fVar1;
  if (fVar7 == ltcg_pool_0_0f) {
    return 0;
  }
  fVar7 = lbl_821CA460 / fVar7;
  param_5[2] = (fVar4 * fVar3 - fVar6 * fVar2) * fVar7;
  *param_5 = (fVar6 * fVar1 - fVar5 * fVar3) * fVar7;
  return 1;
}

