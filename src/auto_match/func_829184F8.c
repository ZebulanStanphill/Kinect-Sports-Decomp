extern int fn_826311B8();


unsigned __int64
fn_829184F8(unsigned __int64 param_1,unsigned __int64 param_2,int param_3,float *param_4,unsigned __int64 param_5)

{
  __int64 lVar1;
  
  lVar1 = (param_5 & 0x3fffffff) << 2;
  if ((param_5 & 0x3fffffff) != 0) {
    param_3 = param_3 - (int)param_4;
    do {
      *param_4 = (float)(*(int *)(param_3 + (int)param_4) != 0);
      param_4 = param_4 + 1;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  fn_826311B8();
  return 0;
}

