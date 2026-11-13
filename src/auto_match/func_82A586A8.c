extern int fn_82A751F8();


unsigned __int64 fn_82A586A8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned int *param_3,int param_4,
                       unsigned __int64 param_5,unsigned __int64 param_6)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  
  uVar2 = (-(unsigned __int64)(*param_3 < 32000) & 0xfffffffe) + 5;
  uVar1 = fn_82A751F8(param_1,*param_3,param_5,param_6);
  if ((uVar1 & 0xffffffff) != 0) {
    if ((param_4 == 0) &&
       ((param_1 & 0xffffffff) /
        ((__int64)(int)(unsigned int)*(unsigned char *)((int)param_3 + 7) * (__int64)(int)uVar1 & 0xffffffffU) <
        (uVar2 & 0xffffffff))) {
      uVar1 = (param_1 & 0xffffffff) / ((__int64)(int)uVar1 * (__int64)(int)uVar2 & 0xffffffffU);
    }
    else {
      uVar1 = (unsigned __int64)*(unsigned char *)((int)param_3 + 7);
    }
  }
  return uVar1;
}

