extern unsigned int uStack_a;


double fn_828171F8(double param_1,unsigned __int64 param_2,unsigned __int64 param_3,short *param_4,
                    unsigned short *param_5,short *param_6,short *param_7,int param_8)

{
  unsigned __int64 uVar1;
  short sVar2;
  unsigned __int64 uVar3;
  unsigned short uStack_a;
  
  if (param_8 == 0) {
    param_2 = param_2 - 1;
    param_1 = (double)(param_2 & 0xffffffff) * param_1;
    uStack_a = (unsigned short)(__int64)param_1;
    *param_5 = uStack_a;
    *param_4 = uStack_a + ((uStack_a == 0) - 1);
    uVar1 = (unsigned __int64)(param_2 != *param_5) + (unsigned __int64)*param_5;
    sVar2 = (short)uVar1;
    *param_6 = sVar2;
    *param_7 = (unsigned short)(param_2 != (uVar1 & 0xffff)) + sVar2;
  }
  else {
    param_1 = (double)(param_2 & 0xffffffff) * param_1;
    uStack_a = (unsigned short)(__int64)param_1;
    uVar3 = ((__int64)param_1 & 0xffffU) -
            (__int64)(int)((unsigned int)uStack_a / (unsigned int)param_2) * (__int64)(int)(unsigned int)param_2;
    uVar1 = (uVar3 & 0xffff) + 1;
    *param_5 = (unsigned short)uVar3;
    sVar2 = (short)param_2;
    *param_6 = (short)uVar1 - (short)(uVar1 / (param_2 & 0xffffffff)) * sVar2;
    *param_7 = (short)((unsigned __int64)*param_5 + 2) -
               (short)(((unsigned __int64)*param_5 + 2) / (param_2 & 0xffffffff)) * sVar2;
    uVar1 = (*param_5 + param_2) - 1;
    *param_4 = (short)uVar1 - (short)((uVar1 & 0xffffffff) / (param_2 & 0xffffffff)) * sVar2;
  }
  return (double)((float)param_1 - (float)*param_5);
}

