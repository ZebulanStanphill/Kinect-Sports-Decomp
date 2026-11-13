extern int fn_826310E0();


unsigned __int64
fn_82918268(unsigned __int64 param_1,unsigned __int64 param_2,int param_3,float *param_4,unsigned __int64 param_5)

{
  __int64 lVar1;
  
  lVar1 = (param_5 & 0x3fffffff) << 2;
  if ((param_5 & 0x3fffffff) != 0) {
    param_3 = param_3 - (int)param_4;
    do {
      *param_4 = (float)(__int64)*(int *)(param_3 + (int)param_4);
      param_4 = param_4 + 1;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  fn_826310E0();
  return 0;
}

