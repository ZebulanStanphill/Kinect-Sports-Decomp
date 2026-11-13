extern int fn_8280AB50();


unsigned __int64 fn_82810380(unsigned __int64 param_1,float *param_2,float *param_3)

{
  int iVar1;
  
  iVar1 = fn_8280AB50((double)*param_2,(double)*param_3,param_1);
  if (((iVar1 != 0) &&
      (iVar1 = fn_8280AB50((double)param_2[1],(double)param_3[1],param_1), iVar1 != 0)) &&
     (iVar1 = fn_8280AB50((double)param_2[2],(double)param_3[2],param_1), iVar1 != 0)) {
    return 1;
  }
  return 0;
}

