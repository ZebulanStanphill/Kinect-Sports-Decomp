extern unsigned int lbl_821AAD20;


double fn_82755808(float *param_1,float *param_2,float *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = (double)(*param_2 - *param_1);
  dVar3 = (double)(param_2[1] - param_1[1]);
  dVar2 = (double)lbl_821AAD20;
  if ((dVar1 != dVar2) || (dVar3 != dVar2)) {
    dVar2 = (double)((float)((double)(param_3[1] - param_1[1]) * dVar3 +
                            (double)(float)((double)(*param_3 - *param_1) * dVar1)) /
                    (float)(dVar3 * dVar3 + (double)(float)(dVar1 * dVar1)));
  }
  return dVar2;
}

