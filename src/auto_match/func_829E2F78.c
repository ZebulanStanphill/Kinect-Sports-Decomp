void fn_829E2F78(double param_1,float *param_2,unsigned __int64 param_3,float *param_4)

{
  double dVar1;
  double dVar2;
  
  if ((int)param_2[2] < 2) {
    param_2[2] = (float)((int)param_2[2] + 1);
  }
  else {
    dVar2 = (double)param_2[1];
    dVar1 = (double)*param_2;
    if (((dVar2 <= dVar1) && (dVar1 <= param_1)) || ((dVar1 <= dVar2 && (param_1 <= dVar1)))) {
      *param_4 = *param_2;
      goto LAB_829e2f90;
    }
    if (((dVar1 <= dVar2) && (dVar2 <= param_1)) || ((dVar2 <= dVar1 && (param_1 <= dVar2)))) {
      *param_4 = param_2[1];
      goto LAB_829e2f90;
    }
  }
  *param_4 = (float)param_1;
LAB_829e2f90:
  *param_2 = param_2[1];
  param_2[1] = (float)param_1;
  return;
}

