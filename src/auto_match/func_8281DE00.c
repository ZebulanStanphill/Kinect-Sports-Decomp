extern int fn_82809558();
extern int fn_828106A0();


void fn_8281DE00(int param_1,float *param_2)

{
  float *pfVar1;
  __int64 lVar2;
  double dVar3;
  
  fn_828106A0(param_2);
  pfVar1 = (float *)(param_1 + 0x14);
  lVar2 = 3;
  do {
    *param_2 = pfVar1[-5] * pfVar1[-5] + *param_2;
    param_2[1] = pfVar1[-2] * pfVar1[-2] + param_2[1];
    pfVar1 = pfVar1 + 1;
    param_2[2] = *pfVar1 * *pfVar1 + param_2[2];
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  dVar3 = (double)fn_82809558((double)*param_2);
  *param_2 = (float)dVar3;
  dVar3 = (double)fn_82809558((double)param_2[1]);
  param_2[1] = (float)dVar3;
  dVar3 = (double)fn_82809558((double)param_2[2]);
  param_2[2] = (float)dVar3;
  return;
}

