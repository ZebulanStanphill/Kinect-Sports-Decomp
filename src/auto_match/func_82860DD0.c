extern int fn_82809E58();


void fn_82860DD0(double param_1,double param_2,int param_3,int param_4,int param_5)

{
  double dVar1;
  
  dVar1 = (double)fn_82809E58((double)(float)((double)(__int64)param_4 /
                                              (double)(__int64)*(int *)(param_3 + 8)));
  *(float *)(param_3 + 0xec) = (float)dVar1;
  dVar1 = (double)fn_82809E58((double)(float)((double)(__int64)*(int *)(param_3 + 0x10) * dVar1));
  *(float *)(param_3 + 0xe4) = (float)dVar1;
  dVar1 = (double)fn_82809E58((double)(float)((double)(__int64)param_5 /
                                              (double)(__int64)*(int *)(param_3 + 0xc)));
  *(float *)(param_3 + 0xf0) = (float)dVar1;
  dVar1 = (double)fn_82809E58((double)(float)((double)(__int64)*(int *)(param_3 + 0x14) * dVar1));
  *(float *)(param_3 + 0xe8) = (float)dVar1;
  *(float *)(param_3 + 0xf4) = (float)param_1;
  *(float *)(param_3 + 0xf8) = (float)param_2;
  return;
}

