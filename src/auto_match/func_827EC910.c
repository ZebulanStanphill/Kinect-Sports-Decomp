unsigned __int64 fn_827EC910(double param_1,double param_2,double param_3,double param_4)

{
  float *in_r7;
  float *in_r8;
  
  if ((param_3 <= param_2) && (param_1 <= param_4)) {
    if ((param_3 < param_1) || (param_2 < param_3)) {
      *in_r7 = (float)param_1;
      if (param_2 < param_4) {
        *in_r8 = (float)param_2;
        return 1;
      }
    }
    else {
      *in_r7 = (float)param_3;
      if (param_2 <= param_4) {
        param_4 = param_2;
      }
    }
    *in_r8 = (float)param_4;
    return 1;
  }
  return 0;
}

