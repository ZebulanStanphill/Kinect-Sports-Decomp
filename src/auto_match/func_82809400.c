extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8201DD70;
extern unsigned int lbl_8201DF1C;
extern unsigned int lbl_8201DF20;
extern unsigned int lbl_8201DF24;
extern unsigned int lbl_8201DF28;
extern unsigned int lbl_8201DF2C;
extern unsigned int lbl_8201DF30;
extern unsigned int lbl_8201DF34;


double fn_82809400(double param_1)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  
  dVar3 = (double)(float)(param_1 * param_1);
  dVar4 = (double)lbl_82002AE0;
  if (dVar3 <= dVar4) {
    return (double)(float)((double)(float)((double)(float)((double)(float)((double)(float)((double)(
                                                  float)((double)(float)(dVar3 * (double)
                                                  lbl_8201DF24 - (double)lbl_8201DF34) * dVar3 +
                                                  (double)lbl_8201DF30) * dVar3 -
                                                  (double)lbl_8201DF2C) * dVar3 +
                                                  (double)lbl_8201DF28) * dVar3 -
                                                  (double)lbl_8201DF20) * dVar3 +
                                          (double)lbl_8201DF1C) * param_1);
  }
  fVar1 = (float)(dVar4 / param_1);
  fVar2 = fVar1 * fVar1;
  fVar2 = (((((fVar2 * lbl_8201DF24 - lbl_8201DF34) * fVar2 + lbl_8201DF30) * fVar2 - lbl_8201DF2C)
            * fVar2 + lbl_8201DF28) * fVar2 - lbl_8201DF20) * fVar2 + lbl_8201DF1C;
  if (dVar4 < param_1) {
    return -(double)(fVar2 * fVar1 - lbl_8201DD70);
  }
  return -(double)(fVar2 * fVar1 + lbl_8201DD70);
}

