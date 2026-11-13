unsigned __int64 fn_82651A90(__int64 param_1,unsigned __int64 param_2)

{
  if (param_1 < 0) {
    return 0;
  }
  if (param_2 == 0) {
    return 0xffff;
  }
  if ((__int64)param_2 <= param_1) {
    return 0xfffe;
  }
  trapDoubleWordImmediate(6,param_2,0);
  trapDoubleWordImmediate
            (5,param_2 & ~((param_1 * 0x1fffc | (unsigned __int64)(param_1 * 0xfffe) >> 0x3f) - 1),0xffff);
  return (param_1 * 0xfffe) / (__int64)param_2 & 0xffffffff;
}

