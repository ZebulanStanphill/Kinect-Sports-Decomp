unsigned __int64 fn_8281E9C8(unsigned int *param_1)

{
  __int64 lVar1;
  __int64 lVar2;
  __int64 lVar3;
  __int64 lVar4;
  
  lVar3 = -((unsigned __int64)param_1[3] & 0x7f800000) + 0x7f800000;
  lVar2 = -((unsigned __int64)param_1[2] & 0x7f800000) + 0x7f800000;
  lVar1 = -((unsigned __int64)param_1[1] & 0x7f800000) + 0x7f800000;
  lVar4 = -((unsigned __int64)*param_1 & 0x7f800000) + 0x7f800000;
  return lVar3 + (-(unsigned __int64)(lVar3 == 0) - (-((unsigned __int64)param_1[3] & 0x7f800000) + 0x7f7fffff)) &
         lVar2 + (-(unsigned __int64)(lVar2 == 0) - (-((unsigned __int64)param_1[2] & 0x7f800000) + 0x7f7fffff)) &
         lVar1 + (-(unsigned __int64)(lVar1 == 0) - (-((unsigned __int64)param_1[1] & 0x7f800000) + 0x7f7fffff)) &
         lVar4 + (-(unsigned __int64)(lVar4 == 0) - (-((unsigned __int64)*param_1 & 0x7f800000) + 0x7f7fffff)) & 1
  ;
}

