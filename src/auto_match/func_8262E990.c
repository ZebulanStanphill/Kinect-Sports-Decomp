extern int fn_8262E718();
extern int fn_8262E850();


double fn_8262E990(double param_1,float *param_2)

{
  float fVar1;
  
  if (((unsigned int)param_2[4] & 2) == 0) {
    if (((unsigned int)param_2[4] & 1) != 0) {
      fVar1 = (float)((double)param_2[2] * param_1 + (double)param_2[3]);
      param_2[3] = fVar1;
      if (param_2[1] < fVar1) {
        param_2 = (float *)fn_8262E850();
      }
    }
  }
  else {
    fVar1 = -(float)((double)param_2[2] * param_1 - (double)param_2[3]);
    param_2[3] = fVar1;
    if (fVar1 < *param_2) {
      param_2 = (float *)fn_8262E718();
    }
  }
  return (double)param_2[3];
}

