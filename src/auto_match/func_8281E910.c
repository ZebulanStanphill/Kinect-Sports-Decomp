unsigned __int64 fn_8281E910(unsigned int *param_1)

{
  __int64 lVar1;
  __int64 lVar2;
  __int64 lVar3;
  
  lVar2 = -((unsigned __int64)param_1[2] & 0x7f800000) + 0x7f800000;
  lVar1 = -((unsigned __int64)param_1[1] & 0x7f800000) + 0x7f800000;
  lVar3 = -((unsigned __int64)*param_1 & 0x7f800000) + 0x7f800000;
  return lVar2 + (-(unsigned __int64)(lVar2 == 0) - (-((unsigned __int64)param_1[2] & 0x7f800000) + 0x7f7fffff)) &
         lVar1 + (-(unsigned __int64)(lVar1 == 0) - (-((unsigned __int64)param_1[1] & 0x7f800000) + 0x7f7fffff)) &
         lVar3 + (-(unsigned __int64)(lVar3 == 0) - (-((unsigned __int64)*param_1 & 0x7f800000) + 0x7f7fffff)) & 1
  ;
}

