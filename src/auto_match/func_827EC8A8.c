unsigned __int64
fn_827EC8A8(double param_1,double param_2,double param_3,double param_4,float *param_5,
             unsigned __int64 param_6,unsigned __int64 param_7,float *param_8)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (double)(float)((double)param_5[1] + param_1);
  dVar1 = (double)(float)((double)param_8[1] + param_3);
  if (dVar2 <= dVar1) {
    if (dVar2 < (double)param_8[1]) {
      return 0;
    }
  }
  else if (dVar1 < (double)param_5[1]) {
    return 0;
  }
  if ((float)(param_2 + param_4) * (float)(param_2 + param_4) <=
      (param_5[2] - param_8[2]) * (param_5[2] - param_8[2]) +
      (*param_5 - *param_8) * (*param_5 - *param_8)) {
    return 0;
  }
  return 1;
}

