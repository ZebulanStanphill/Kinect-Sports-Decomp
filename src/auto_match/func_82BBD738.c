unsigned __int64 fn_82BBD738(double param_1,unsigned __int64 param_2,int param_3)

{
  float fVar1;
  
  fVar1 = (float)((double)(__int64)param_3 * param_1);
  if (((unsigned int)fVar1 & 0x7f800000) < 0x4e800001) {
    return (unsigned __int64)(unsigned int)(int)((double)(__int64)param_3 * param_1);
  }
  if (((unsigned int)fVar1 & 0x80000000) != 0) {
    return 0xffffffff80000000;
  }
  return 0x7fffffff;
}

