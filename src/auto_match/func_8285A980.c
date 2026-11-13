extern int fn_828102A8();
extern int fn_82810360();
extern int fn_828105C8();


void fn_8285A980(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,unsigned int param_4,unsigned __int64 param_5
                  ,int param_6,unsigned __int64 param_7)

{
  short *psVar1;
  
  if (param_4 == 0) {
    psVar1 = (short *)(param_6 * 6 + param_2);
    fn_828105C8((double)(__int64)*psVar1,(double)(__int64)psVar1[1],(double)(__int64)psVar1[2],
                 param_7);
    fn_828102A8(param_1,param_7,param_7);
  }
  else {
    if (param_4 == 1) {
      param_6 = param_6 * 0xc;
    }
    else {
      if (3 < param_4) {
        return;
      }
      param_6 = param_6 << 4;
    }
    fn_82810360(param_6 + param_2,param_7);
  }
  return;
}

