extern int fn_82F68CC0();


unsigned __int64 fn_82CE35B0(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  
  if (((unsigned __int64)param_1[2] - (unsigned __int64)param_1[3] & 0xffffffff) < (param_3 & 0xffffffff)) {
    uVar1 = 0xffffffff8007007a;
  }
  else {
    fn_82F68CC0((unsigned __int64)param_1[3] + (unsigned __int64)*param_1,param_2,param_3);
    uVar1 = 0;
    param_1[3] = (int)param_3 + param_1[3];
  }
  return uVar1;
}

