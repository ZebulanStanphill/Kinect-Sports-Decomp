#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_83016E90();
extern int fn_83017DA0();
extern int fn_83019690();


unsigned __int64
fn_83018CD8(double param_1,__int64 param_2,__int64 param_3,unsigned __int64 param_4,__int64 param_5)

{
  unsigned __int64 uVar1;
  float *pfVar2;
  __int64 lVar3;
  
  lVar3 = param_2 + 0x720;
  RtlEnterCriticalSection(lVar3);
  uVar1 = CONCAT44((int)param_3,(int)param_5);
  pfVar2 = (float *)fn_83016E90(param_2 + 4,uVar1,
                                 param_3 + param_5 +
                                 ((param_3 + param_5 & 0xffffffffU) / 0xc1) * -0xc1);
  if ((pfVar2 == (float *)0x0) || ((double)*pfVar2 != param_1)) {
    fn_83017DA0(param_1,param_2,param_3,pfVar2);
    if (pfVar2 == (float *)0x0) {
      pfVar2 = (float *)fn_83019690(param_2 + 4,uVar1);
      if (pfVar2 != (float *)0x0) {
        *pfVar2 = (float)param_1;
        RtlLeaveCriticalSection(lVar3);
        return 1;
      }
      RtlLeaveCriticalSection(lVar3);
      return 2;
    }
    *pfVar2 = (float)param_1;
  }
  RtlLeaveCriticalSection(lVar3);
  return 1;
}

