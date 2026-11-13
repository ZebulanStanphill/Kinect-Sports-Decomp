extern float fRam832115f0;
extern int fn_82F68B64();
extern int fn_82F68B78();
extern int iRam832115e0;


unsigned __int64
fn_8285F508(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned __int64 uVar1;
  
  if (iRam832115e0 == 0) {
    uVar1 = fn_82F68B64((double)fRam832115f0,param_1,param_2,0xffffffff832115e4,param_4,param_3);
    return uVar1;
  }
  if (iRam832115e0 != 1) {
    return 2;
  }
  uVar1 = fn_82F68B78(param_1,param_2,0xffffffff832115f4,0xffffffff83211600);
  return uVar1;
}

