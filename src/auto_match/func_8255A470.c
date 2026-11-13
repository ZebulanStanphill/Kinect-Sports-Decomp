extern unsigned int lbl_82195590;
extern unsigned int lbl_82195598;
extern unsigned int lbl_821955A0;


double fn_8255A470(double param_1,double param_2,double param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar2 = (double)lbl_82195590;
  dVar5 = (double)(float)(((double)(float)(param_2 * dVar2) -
                          (double)(__int64)((double)(float)(param_2 * dVar2) - lbl_82195598)) *
                         lbl_821955A0);
  dVar4 = (double)(float)(((double)(float)(param_3 * dVar2) -
                          (double)(__int64)((double)(float)(param_3 * dVar2) - lbl_82195598)) *
                         lbl_821955A0);
  dVar3 = (double)(float)(((double)(float)(param_1 * dVar2) -
                          (double)(__int64)((double)(float)(param_1 * dVar2) - lbl_82195598)) *
                         lbl_821955A0);
  if (dVar4 < dVar5) {
    if (dVar3 <= dVar4) {
      return dVar3;
    }
    if (dVar5 <= dVar3) {
      return dVar3;
    }
  }
  else if ((dVar5 <= dVar3) && (dVar3 <= dVar4)) {
    return dVar3;
  }
  dVar1 = (double)(float)(dVar5 - dVar3) * dVar2;
  dVar2 = (double)(float)(dVar4 - dVar3) * dVar2;
  if (ABS((float)(((double)(float)dVar2 - (double)(__int64)dVar2) * lbl_821955A0)) <=
      ABS((float)(((double)(float)dVar1 - (double)(__int64)dVar1) * lbl_821955A0))) {
    return dVar4;
  }
  return dVar5;
}

