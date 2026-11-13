unsigned __int64 fn_8281E8D8(unsigned int *param_1)

{
  __int64 lVar1;
  __int64 lVar2;
  
  lVar1 = -((unsigned __int64)param_1[1] & 0x7f800000) + 0x7f800000;
  lVar2 = -((unsigned __int64)*param_1 & 0x7f800000) + 0x7f800000;
  return lVar1 + (-(unsigned __int64)(lVar1 == 0) - (-((unsigned __int64)param_1[1] & 0x7f800000) + 0x7f7fffff)) &
         lVar2 + (-(unsigned __int64)(lVar2 == 0) - (-((unsigned __int64)*param_1 & 0x7f800000) + 0x7f7fffff)) & 1
  ;
}

