extern unsigned int lbl_82079FCC;


void fn_829F4C80(double param_1,double param_2,float *param_3)

{
  double dVar1;
  
  dVar1 = (double)*param_3;
  if (param_1 <= dVar1) {
    if (dVar1 <= param_1) {
      return;
    }
    *param_3 = (float)(dVar1 - param_2);
    if ((double)(float)(dVar1 - param_2) < param_1) goto LAB_829f4ccc;
  }
  else {
    *param_3 = (float)(dVar1 + param_2);
    if (param_1 < (double)(float)(dVar1 + param_2)) goto LAB_829f4ccc;
  }
  if ((double)lbl_82079FCC <= ABS(param_2)) {
    return;
  }
LAB_829f4ccc:
  *param_3 = (float)param_1;
  return;
}

