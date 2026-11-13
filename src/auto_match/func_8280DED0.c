extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


double fn_8280DED0(float *param_1,float *param_2,float *param_3)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (double)lbl_821AAD20;
  dVar1 = (double)(*param_2 * *param_1 +
                  param_2[2] * param_1[2] + param_2[1] * param_1[1] + param_2[3] * param_1[3]);
  if (dVar2 <= dVar1) {
    if (param_3 != param_1) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
      param_3[3] = param_1[3];
    }
  }
  else {
    *param_3 = -*param_1;
    param_3[1] = -param_1[1];
    dVar1 = -dVar1;
    param_3[2] = -param_1[2];
    param_3[3] = -param_1[3];
  }
  if (dVar1 < dVar2) {
    return dVar2;
  }
  if (dVar1 <= (double)lbl_82002AE0) {
    return dVar1;
  }
  return (double)lbl_82002AE0;
}

