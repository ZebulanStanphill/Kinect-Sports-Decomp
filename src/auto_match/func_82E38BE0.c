unsigned __int64 fn_82E38BE0(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  
  param_2 = param_2 & 0xffffffff;
  trapDoubleWordImmediate(6,param_2,0);
  uVar1 = ((param_1 & 0xffffffff) * (param_3 & 0xffffffff) + param_2) - 1;
  trapDoubleWordImmediate(5,param_2 & ~((uVar1 * 2 | uVar1 >> 0x3f) - 1),0xffff);
  return (__int64)uVar1 / (__int64)param_2 & 0xffffffff;
}

