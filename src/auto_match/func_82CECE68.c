extern unsigned int lbl_8201DD70;
extern unsigned int lbl_8201DD74;
extern unsigned int lbl_82057518;
extern unsigned int lbl_82132CE0;
extern unsigned int lbl_82132CE4;
extern unsigned int lbl_821AAD20;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double fn_82CECE68(double param_1,double param_2)

{
  float fVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = ABS(param_1);
  dVar3 = ABS(param_2);
  if (dVar3 < dVar2) {
    fVar1 = (float)(dVar3 / (double)(float)(dVar2 + (double)lbl_82057518));
    dVar2 = (double)(lbl_8201DD70 -
                    -(fVar1 * fVar1 * fVar1 * lbl_82132CE0 -
                     -(fVar1 * fVar1 * lbl_82132CE4 - fVar1)));
  }
  else {
    fVar1 = (float)(dVar2 / (double)(float)(dVar3 + (double)lbl_82057518));
    dVar2 = -(double)(fVar1 * fVar1 * fVar1 * lbl_82132CE0 -
                     -(fVar1 * fVar1 * lbl_82132CE4 - fVar1));
  }
  if (param_2 < (double)lbl_821AAD20) {
    dVar2 = (double)(float)((double)lbl_8201DD74 - dVar2);
  }
  if (param_1 < (double)lbl_821AAD20) {
    return -dVar2;
  }
  return dVar2;
}

