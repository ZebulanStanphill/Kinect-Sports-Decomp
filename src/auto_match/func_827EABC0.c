extern unsigned int lbl_82005710;


unsigned __int64 fn_827EABC0(float *param_1,float *param_2,float *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar1 = (double)param_1[1];
  dVar4 = (double)param_2[1];
  if (dVar1 < 0.0) {
    dVar4 = (double)param_3[1];
  }
  dVar6 = (double)*param_1;
  dVar3 = (double)*param_2;
  if (dVar6 < 0.0) {
    dVar3 = (double)*param_3;
  }
  dVar5 = (double)param_1[2];
  dVar2 = (double)param_2[2];
  if (dVar5 < 0.0) {
    dVar2 = (double)param_3[2];
  }
  if (lbl_82005710 < (dVar2 * dVar5 + dVar3 * dVar6 + dVar4 * dVar1) - (double)param_1[3]) {
    return 3;
  }
  dVar4 = (double)param_3[1];
  if (dVar1 < 0.0) {
    dVar4 = (double)param_2[1];
  }
  dVar3 = (double)*param_3;
  if (dVar6 < 0.0) {
    dVar3 = (double)*param_2;
  }
  dVar2 = (double)param_3[2];
  if (dVar5 < 0.0) {
    dVar2 = (double)param_2[2];
  }
  if (lbl_82005710 < (dVar2 * dVar5 + dVar3 * dVar6 + dVar4 * dVar1) - (double)param_1[3]) {
    return 1;
  }
  return 0;
}

