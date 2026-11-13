double fn_8301E260(double param_1,double param_2,double param_3,double param_4,double param_5)

{
  if (param_5 <= param_1) {
    return param_2;
  }
  if (param_3 <= param_5) {
    return param_4;
  }
  return (double)(float)((double)((float)(param_5 - param_1) / (float)(param_3 - param_1)) *
                         (double)(float)(param_4 - param_2) + param_2);
}

