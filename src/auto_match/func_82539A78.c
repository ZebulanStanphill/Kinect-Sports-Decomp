#define NAN(x) ((x) != (x))
extern unsigned int lbl_821954D8;
extern unsigned int lbl_82195628;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


unsigned __int64 fn_82539A78(double param_1,double param_2,double param_3,double param_4,double param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  float *in_r8;
  float *in_r9;
  
  if ((double)lbl_82195628 <= ABS(param_5)) {
    fVar1 = (float)(param_1 - param_3) * (float)((double)lbl_821CA460 / param_5);
    fVar3 = (float)(param_2 - param_3) * (float)((double)lbl_821CA460 / param_5);
    fVar4 = fVar1;
    if (fVar3 < fVar1) {
      fVar4 = fVar3;
      fVar3 = fVar1;
    }
    fVar1 = *in_r8;
    if ((fVar1 <= fVar3) && (fVar2 = *in_r9, fVar4 <= fVar2)) {
      if (*(float *)(&lbl_821954D8 +
                    ((unsigned int)(unsigned char)((fVar4 - fVar1 < ltcg_pool_0_0f) << 2) |
                    (unsigned int)(NAN(fVar4 - fVar1) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
        fVar4 = fVar1;
      }
      if (*(float *)(&lbl_821954D8 +
                    ((unsigned int)(unsigned char)((fVar3 - fVar2 < ltcg_pool_0_0f) << 2) |
                    (unsigned int)(NAN(fVar3 - fVar2) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
        fVar2 = fVar3;
      }
      *in_r8 = fVar4;
      *in_r9 = fVar2;
      if (fVar4 <= fVar2) {
        return 1;
      }
    }
  }
  else {
    dVar5 = param_4;
    if ((double)ltcg_pool_0_0f < param_5) {
      dVar5 = param_3;
      param_3 = param_4;
    }
    if ((param_1 <= param_3) && (dVar5 <= param_2)) {
      return 1;
    }
  }
  return 0;
}

