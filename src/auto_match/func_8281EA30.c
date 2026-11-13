unsigned __int64 fn_8281EA30(unsigned int *param_1)

{
  __int64 lVar1;
  __int64 lVar2;
  __int64 lVar3;
  __int64 lVar4;
  __int64 lVar5;
  __int64 lVar6;
  __int64 lVar7;
  __int64 lVar8;
  __int64 lVar9;
  
  lVar8 = -((unsigned __int64)param_1[8] & 0x7f800000) + 0x7f800000;
  lVar6 = -((unsigned __int64)param_1[7] & 0x7f800000) + 0x7f800000;
  lVar5 = -((unsigned __int64)param_1[6] & 0x7f800000) + 0x7f800000;
  lVar4 = -((unsigned __int64)param_1[5] & 0x7f800000) + 0x7f800000;
  lVar3 = -((unsigned __int64)param_1[4] & 0x7f800000) + 0x7f800000;
  lVar1 = -((unsigned __int64)param_1[3] & 0x7f800000) + 0x7f800000;
  lVar7 = -((unsigned __int64)param_1[2] & 0x7f800000) + 0x7f800000;
  lVar2 = -((unsigned __int64)param_1[1] & 0x7f800000) + 0x7f800000;
  lVar9 = -((unsigned __int64)*param_1 & 0x7f800000) + 0x7f800000;
  return lVar8 + (-(unsigned __int64)(lVar8 == 0) - (-((unsigned __int64)param_1[8] & 0x7f800000) + 0x7f7fffff)) &
         lVar6 + (-(unsigned __int64)(lVar6 == 0) - (-((unsigned __int64)param_1[7] & 0x7f800000) + 0x7f7fffff)) &
         lVar5 + (-(unsigned __int64)(lVar5 == 0) - (-((unsigned __int64)param_1[6] & 0x7f800000) + 0x7f7fffff)) &
         lVar4 + (-(unsigned __int64)(lVar4 == 0) - (-((unsigned __int64)param_1[5] & 0x7f800000) + 0x7f7fffff)) &
         lVar3 + (-(unsigned __int64)(lVar3 == 0) - (-((unsigned __int64)param_1[4] & 0x7f800000) + 0x7f7fffff)) &
         lVar1 + (-(unsigned __int64)(lVar1 == 0) - (-((unsigned __int64)param_1[3] & 0x7f800000) + 0x7f7fffff)) &
         lVar7 + (-(unsigned __int64)(lVar7 == 0) - (-((unsigned __int64)param_1[2] & 0x7f800000) + 0x7f7fffff)) &
         lVar2 + (-(unsigned __int64)(lVar2 == 0) - (-((unsigned __int64)param_1[1] & 0x7f800000) + 0x7f7fffff)) &
         lVar9 + (-(unsigned __int64)(lVar9 == 0) - (-((unsigned __int64)*param_1 & 0x7f800000) + 0x7f7fffff)) & 1
  ;
}

