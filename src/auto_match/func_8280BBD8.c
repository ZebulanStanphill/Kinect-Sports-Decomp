extern int fn_82809558();


void fn_8280BBD8(float *param_1,float *param_2)

{
  __int64 lVar1;
  double dVar2;
  
  *param_2 = *param_1 * *param_1;
  param_2[1] = param_1[4] * param_1[4];
  param_2[2] = param_1[8] * param_1[8];
  param_1 = param_1 + 8;
  lVar1 = 2;
  do {
    *param_2 = param_1[-7] * param_1[-7] + *param_2;
    param_2[1] = param_1[-3] * param_1[-3] + param_2[1];
    param_1 = param_1 + 1;
    param_2[2] = *param_1 * *param_1 + param_2[2];
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  dVar2 = (double)fn_82809558((double)*param_2);
  *param_2 = (float)dVar2;
  dVar2 = (double)fn_82809558((double)param_2[1]);
  param_2[1] = (float)dVar2;
  dVar2 = (double)fn_82809558((double)param_2[2]);
  param_2[2] = (float)dVar2;
  return;
}

