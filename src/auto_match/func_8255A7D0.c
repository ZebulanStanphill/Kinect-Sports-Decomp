extern float lbl_82195590;
extern float lbl_821955A0;
extern unsigned int ltcg_pool_0_0f;


double fn_8255A7D0(double param_1,double param_2,double param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)(param_2 - param_3) * lbl_82195590;
  fVar2 = (float)(param_2 - param_1) * lbl_82195590;
  fVar1 = (float)(((double)fVar1 - (double)(__int64)fVar1) * lbl_821955A0);
  fVar2 = (float)(((double)fVar2 - (double)(__int64)fVar2) * lbl_821955A0);
  if (fVar1 <= ltcg_pool_0_0f) {
    if (ltcg_pool_0_0f < fVar2) {
      return param_2;
    }
    if (fVar1 <= fVar2) {
      return param_1;
    }
  }
  else {
    if (fVar2 < ltcg_pool_0_0f) {
      return param_2;
    }
    if (fVar2 <= fVar1) {
      return param_1;
    }
  }
  return param_3;
}

